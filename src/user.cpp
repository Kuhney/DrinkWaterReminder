#include "user.h"

void User::calc_water_intake_goal(){
    water_intake_goal = weight*(30+activity_level);
}

DrinkStatus User::drink(float water_amount){
    if (water_amount < 0){
        Serial.println("Error. Trying to drink negative water");
    }
    remaining_water_intake -= water_amount;
    if (remaining_water_intake > 0){
        return InProgress;
    }
    return Finished;
}

void User::dayReset(){
    water_intake_progress = 0.0f;
    remaining_water_intake = water_intake_goal;
}
