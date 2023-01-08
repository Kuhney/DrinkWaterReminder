#include "reminder.h"

Reminder::Reminder(){
    
}

void Reminder::restartDrinkTimer(){
    last_drink_ts = millis();
}

void Reminder::checkTimer(){
    if((millis() - last_drink_ts) >= drink_timer_duration){
        
    }
}
