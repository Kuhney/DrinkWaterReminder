#ifndef REMINDER_H
#define REMINDER_H

#include "Arduino.h"

class Reminder{
    private:
        unsigned long last_drink_ts = 0;
        unsigned long drink_timer_duration = 5000;
        bool notified = false;

    public:
        Reminder();
        void set_reminder(unsigned long time);
        void restart_drink_timer();
        bool check_drink_timer();
};

#endif // REMINDER_H