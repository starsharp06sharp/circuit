#ifndef FAN_H
#define FAN_H

#include "App.h"


class Fan : public App
{
    public:
        Fan(): run(false) {}
        bool isRun() const;
        void on();
        void off();
    protected:
    private:
        bool run;
};

#endif // FAN_H
