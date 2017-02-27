#include<string>
using std::string;

#include "BOYS.h"

BOY::BOY()
{
    this->b_name = "";
    this->b_attractiveness = this->b_intelligence = this->b_budget = this->b_min_attr_req = 0;
}

BOY::BOY( const string n , const int a , const int i , const int b , const int ma )
{
    this->b_name = n;
    this->b_attractiveness = a;
    this->b_intelligence = i;
    this->b_budget = b;
    this->b_min_attr_req = ma;
}

void BOY::b_setdata( const string n , const int a , const int i , const int b , const int ma )
{
    this->b_name = n;
    this->b_attractiveness = a;
    this->b_intelligence = i;
    this->b_budget = b;
    this->b_min_attr_req = ma;
}

string BOY::b_getname()
{
    return this->b_name;
}

int BOY::b_getattr()
{
    return this->b_attractiveness;
}

int BOY::b_getintl()
{
    return this->b_intelligence;
}

int BOY::b_getminatr()
{
    return this->b_min_attr_req;
}

int BOY::b_getbud()
{
    return this->b_budget;
}

bool BOY::b_iscom()
{
    return this->b_com;
}

void BOY::b_sethap( double v )
{
    this->b_happiness = v;
}

int BOY::b_getspent()
{
    return this->b_spent;
}
