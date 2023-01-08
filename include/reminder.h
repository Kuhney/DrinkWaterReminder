#ifndef REMINDER_H
#define REMINDER_H

#include "Arduino.h"

class Reminder{
    private:
        float last_drink_ts = 0.0f;
        float drink_timer_duration = 0.0f;

    public:
        Reminder();
        void restartDrinkTimer();
        void checkTimer();
};

#endif // REMINDER_H