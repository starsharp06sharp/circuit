#include "Circuit.h"

void Circuit::setSwitch(Button* button)
{
    switchs[numOfSwitch++] = button;
    button->masterCircuit = this;
}

void Circuit::append(App* app)
{
    apps[numOfApp++] = app;
}

void Circuit::moveSwitch()
{
    int i;
    bool powerOn=true;
    for (i=0; i<numOfSwitch; i++)
        if (!(switchs[i]->isOn()))
        {
            powerOn=false;
            break;
        }
    if (!powerOn)
    {
        for (i=0; i<numOfApp; i++)
            apps[i]->on();
    }
    else
    {
        for (i=0; i<numOfApp; i++)
            apps[i]->off();
    }
}
