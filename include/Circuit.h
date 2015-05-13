#ifndef CIRCUIT_H
#define CIRCUIT_H

#include "Button.h"
#include "App.h"
#define MAX_NUM (100)

class Button;

class Circuit
{
    public:
        Circuit() : numOfSwitch(0), numOfApp(0) {};
        void setSwitch(Button*);
        void append(App*);
        friend Button;
    protected:
    private:
        void moveSwitch();
        int numOfSwitch;
        Button *switchs[MAX_NUM];
        int numOfApp;
        App *apps[MAX_NUM];
};
#endif // CIRCUIT_H
