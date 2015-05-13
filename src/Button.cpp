#include "Button.h"

bool Button::isOn() const
{
    return status;
}

void Button::on()
{
    status=true;
    masterCircuit->moveSwitch();
}

void Button::off()
{
    status=false;
    masterCircuit->moveSwitch();
}
