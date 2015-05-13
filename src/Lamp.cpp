#include <iostream>
#include "Lamp.h"

bool Lamp::isRun() const
{
    return run;
}

void Lamp::on()
{
    run=true;
    std::cout<<"Lamp is on"<<std::endl;
}

void Lamp::off()
{
    run=false;
    std::cout<<"Lamp is off"<<std::endl;
}
