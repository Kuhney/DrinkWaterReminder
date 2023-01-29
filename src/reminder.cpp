#include "reminder.h"

Reminder::Reminder(){
}

void Reminder::set_reminder(unsigned long time){
    drink_timer_duration = time;
    Serial.print("Set reminder timer duration to: ");
    Serial.println(drink_timer_duration);
}

void Reminder::restart_drink_timer(){
    last_drink_ts = millis();
}

bool Reminder::check_drink_timer(){
    if((millis() - last_drink_ts) >= drink_timer_duration && !notified){
        last_drink_ts = millis();
        return true;
    }else{
        return false;
    }
}
