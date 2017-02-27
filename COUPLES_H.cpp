#include "COUPLES.h"
#include "BOYS.h"
#include "GIRLS.h"
#include "GIFTS.h"
//#include "COUPLES.h"

#include<cmath>
#include<fstream>
#include<cstdlib>
#include<iostream>

GIFT gif[100];
GIFT basket[100];
int no_of_gifts;

void get_gif()
{
    int u,v,w,x,y;
    std::ifstream fin("gifts.csv");
    for( int i = 0 ; i < 100 ; ++i ){
        fin>>u>>v>>w>>x>>y;
        gif[i].setdata(u,v,w,x,y);
    }
    fin.close();
}

void setbasket(BOY *b,GIRL *g)
{
    int i = 0;
    int spent = 0;
    int b_type = rand()%3;

    if( b_type == 0 ){
        while( b->b_getspent() < g->g_getcost() ){
            basket[i] = gif[i];
            spent = spent + gif[i].getprice();
            ++i;
        }
    }
    else if( b_type == 1 ){
        while(1){

            if( spent + gif[i].getprice() > b->b_getbud() ) break;

            basket[i] = gif[i];
            spent = spent + gif[i].getprice();
            ++i;
        }
    }
    else if( b_type == 2 ){
        while( spent < g->g_getcost() ){
            basket[i] = gif[i];
            spent = spent + gif[i].getprice();
            ++i;
        }

        int x = i;
        while( !gif[x].getluxury() ) ++x;

        if( gif[x].getprice() <= b->b_getbud() -spent ){
            basket[i++] = gif[x];
            spent = gif[x].getprice();
        }
        no_of_gifts = i;
    }
}

void COUPLE::set_val(GIRL g,BOY b)
{
    this->gname = g.g_getname();
    this->bname = b.b_getname();

    int g_hap,b_hap;
    int g_type,b_type;

    //! Determining the type of the girl
    if(g.g_getcom())
        g_type = rand()%3;
    else return;

    //! Calculating the happiness of the girl
    int spent,lux_spent,value;
    spent = value = 0;
    lux_spent = basket[no_of_gifts-1].getprice();
    for( int i = 0 ; i < no_of_gifts-1 ; ++i ){
        spent += basket[i].getprice();
        value += basket[i].getvalue();
    }
    if( g_type == 0 )
        g_hap = log(spent+2*lux_spent-g.g_getcost());
    else if( g_type == 1 )
        g_hap = (spent + lux_spent - g.g_getcost() + value );
    else if( g_type == 2 )
        g_hap = pow(2,spent+lux_spent);

    //! Calculating the happiness of the boy
    b_type = rand()%3;

    if( b_type == 0 )
        b_hap = b.b_getbud() - spent;
    else if( b_type == 1 )
        b_hap = g_hap;
    else if( b_type == 2 )
        b_hap = g.g_getintl();


    this->happiness = b_hap + g_hap;
    this->compatibility = abs(6);
}

bool COUPLE::patchup(GIRL g,BOY b)
{
    if(b.b_getminatr() > g.g_getattr()) return false;
    if(b.b_getbud() < g.g_getcost()) return false;

    return true;

}

void COUPLE::display()
{
    std::cout<<gname<<" is the girlfriend of "<<bname<<"."<<std::endl;
    std::cout<<"Happiness = "<<happiness<<std::endl;
    std::cout<<"Compatibility = "<<compatibility<<std::endl;
}

std::string COUPLE::getgname()
{
    return this->gname;
}

std::string COUPLE::getbname()
{
    return this->bname;
}

double COUPLE::geth()
{
    return this->happiness;
}

double COUPLE::getcomp()
{
    return this->compatibility;
}
