#ifndef LED_H
#define LED_H

#include <Arduino.h>  // C system headers

#include "pinout.h"

class LED{
    private:
        const int LED_PIN = LED_MAIN_PIN;

    public:
        void init();
        void drink_notification();
        void endNotification();

};

#endif // LED_H