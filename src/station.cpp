#include "station.h"


void Station::update(){
    led.endNotification();
    if (bottle.update(scale) == Consumed){
        if (user.drink(bottle.consumed_volume) == InProgress) {
            reminder.restart_drink_timer();
        }else{
            reminder.set_reminder_for_next_day();
        }
    }
}

void Station::init(){
    scale.init();
    // reminder.set_reminder(100);
    led.init();
}

void Station::notify(){
    led.drink_notification();
    reminder.notified = true;
}
