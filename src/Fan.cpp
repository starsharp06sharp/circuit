#include <iostream>
#include "Fan.h"

bool Fan::isRun() const
{
    return run;
}

void Fan::on()
{
    run=true;
    std::cout<<"Fan is on"<<std::endl;
}

void Fan::off()
{
    run=false;
    std::cout<<"Fan is off"<<std::endl;
}
