#ifndef REMINDER_H
#define REMINDER_H

#include "Arduino.h"

class Reminder{
    private:
        unsigned long last_drink_ts = 0;
        unsigned long drink_timer_duration = 10000;

    public:
        bool notified = false;
        void set_reminder(unsigned long time);
        void restart_drink_timer();
        bool check_drink_timer();
        void set_reminder_for_next_day();
};

#endif // REMINDER_H