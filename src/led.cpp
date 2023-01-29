#include "led.h"

void LED::init(){
    pinMode(LED_PIN, OUTPUT);
}

void LED::drink_notification()
{
    digitalWrite(LED_PIN, 1);
}

void LED::endNotification(){
    digitalWrite(LED_PIN, 0);
}
