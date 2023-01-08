#include "station.h"

void Station::update(){
    bottle.update_weigth(scale);
    user.drink(bottle.convert_weight_to_ml(bottle.current_weight_diff));
    change_detected = false;
}

void Station::init(){
    scale.init();
    led.init();
}
