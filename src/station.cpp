#include "station.h"

void Station::update(){
    led.endNotification();
    bottle.update_weigth(scale);
    user.drink(bottle.convert_weight_to_ml(bottle.current_weight_diff));
    change_detected = false;
}

void Station::init(){
    scale.init();
    reminder.set_reminder(100);
    led.init();
}

void Station::notify(){
    led.drink_notification();
}
