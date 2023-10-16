#include "bottle.h"


BottleUpdateOptions Bottle::update(Scale scale)
{
    float measured_weight = scale.measure();
    float weight_diff = weight - measured_weight;

    if (weight_diff < 3){
        return Ignored;
    }

    weight = measured_weight;
    volume = convert_weight_to_ml(weight);

    if (weight_diff > 0){
        consumed_volume = convert_weight_to_ml(weight_diff);
        Serial.print("| User drank ");
        Serial.print(consumed_volume);
        Serial.println("ml from bottle |");
        return Consumed;
    }
    
    Serial.println("| Bottle refilled |");
    return Refilled;
}

float Bottle::convert_weight_to_ml(float weight){
    return weight*1;
}
