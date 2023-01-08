#include "bottle.h"

void Bottle::update_weigth(Scale scale){
    last_weight = current_weight;
    current_weight = scale.measure();
    current_weight_diff = current_weight - last_weight;
    if(current_weight_diff > 0){
        empty_weight = last_weight;
        full_weight = current_weight;
    }
}

float Bottle::convert_weight_to_ml(float weight){
    return weight*1000;
}
