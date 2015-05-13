#ifndef LAMP_H
#define LAMP_H

#include "App.h"

class Lamp : public App
{
    public:
        Lamp() : run(false) {}
        bool isRun() const;
        void on();
        void off();
    protected:
    private:
        bool run;
};

#endif // LAMP_H
