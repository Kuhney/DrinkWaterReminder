#ifndef STATION_H
#define STATION_H

#include "user.h"
#include "bottle.h"
#include "loadcell.h"
#include "led.h"

class Station{
    private:
    	Bottle bottle;
        LED led;
        User user;
        

    public:
        Scale scale;
        Reminder reminder;
        
        void update();
        void init();
        void notify();
};

#endif // STATION_H