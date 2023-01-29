#ifndef STATION_H
#define STATION_H

#include "user.h"
#include "bottle.h"
#include "loadcell.h"
#include "led.h"

class Station{
    private:
        bool change_detected = false;
    	Bottle bottle;
        LED led;
        User user;
        

    public:
        Scale scale;
        Reminder reminder;

        bool get_change_detected(){return change_detected;};
        void set_change_detected(bool value){change_detected = value;};
        void update();
        void init();
        void notify();
};

#endif // STATION_H