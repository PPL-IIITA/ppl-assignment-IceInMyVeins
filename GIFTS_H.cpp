#include "GIFTS.h"

GIFT::GIFT()
{
    this->price = this->value = this->luxury = this->difficulty = this->utility = 0;
}

GIFT::GIFT( int a , int b , int c , int d , int e )
{
    this->price = a;
    this->value = b;
    this->luxury = c;
    this->difficulty = d;
    this->utility = e;
}

void GIFT::setdata( int a , int b , int c , int d , int e )
{
    this->price = a;
    this->value = b;
    this->luxury = c;
    this->difficulty = d;
    this->utility = e;
}

int GIFT::getprice()
{
    return this->price;
}

int GIFT::getvalue()
{
    return this->value;
}

int GIFT::getluxury()
{
    return this->luxury;
}

int GIFT::getdifficulty()
{
    return this->difficulty;
}

int GIFT::getutility()
{
    return this->utility;
}
