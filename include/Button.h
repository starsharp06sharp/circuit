#ifndef BUTTON_H
#define BUTTON_H

#include "Circuit.h"

class Circuit;

class Button
{
    public:
        Button() : status(false) {}
        bool isOn() const;
        void on();
        void off();
        friend Circuit;
    protected:
    private:
        bool status;
        Circuit* masterCircuit;
};

#endif // BUTTON_H
