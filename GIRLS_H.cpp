#include<string>
using std::string;

#include "GIRLS.h"

GIRL::GIRL()
{
    this->g_name = "";
    this->g_attractiveness = this->g_intelligence = this->g_cost = 0;
}

GIRL::GIRL( const string n , const int a , const int i , const int b , const int ma )
{
    this->g_name = n;
    this->g_attractiveness = a;
    this->g_intelligence = i;
    this->g_cost = b;
}

void GIRL::g_setdata( const string n , const int a , const int i , const int b )
{
    this->g_name = n;
    this->g_attractiveness = a;
    this->g_intelligence = i;
    this->g_cost = b;
}

string GIRL::g_getname()
{
    return this->g_name;
}

int GIRL::g_getattr()
{
    return this->g_attractiveness;
}

int GIRL::g_getintl()
{
    return this->g_intelligence;
}

int GIRL::g_getcost()
{
    return this->g_cost;
}

bool GIRL::g_getcom()
{
    return this->g_com;
}
