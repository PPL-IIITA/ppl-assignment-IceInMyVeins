#include<cstdlib>
#include<vector>
#include<fstream>

using std::vector;
using std::endl;

#include "BOYS.h"
#include "GIRLS.h"
#include "GIFTS.h"
#include "COUPLES.h"

void form_couples()
{
    int bno,gno;
    gno = (rand()%50)+51;
    bno = (rand()%50)+101;
    vector<BOY>boys(bno);
    vector<GIRL>girls(gno);
    vector<COUPLE>couples(gno);
    int no_of_couples=0;

    string n;
    int a,b,c,d;
    std::ifstream fb("boys.csv");
    for( int i = 0 ; i < gno ; ++i ){
        fb>>n>>a>>b>>c>>d;
        boys[i].b_setdata(n,a,b,c,d);
    }

    std::ifstream fg("girls.csv");
    for( int i = 0 ; i < gno ; ++i ){
        fg>>n>>a>>b>>c;
        girls[i].g_setdata(n,a,b,c);
    }

    int j;
    for( int i = 0 , j = 0 ; i < gno ; ++i ){
        while( j<bno && ( girls[i].g_getcom() == false ) ){
            if(couples[i].patchup(girls[i],boys[i])){
                no_of_couples++;
                break;
            }
            ++j;
        }
    }

    std::ofstream fgi("output1.csv");
    for( int i = 0 ; i < no_of_couples++ ; ++i ){
        couples[i].display();
        fgi<<couples[i].getgname()<<" "<<couples[i].getbname()<<std::endl;
    }

    fb.close();
    fg.close();
    fgi.close();
}

