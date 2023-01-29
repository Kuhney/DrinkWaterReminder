#include "user.h"

void User::calc_water_intake_goal(){
    water_intake_goal = weight*(30+activity_level);
}

void User::drink(float water_amount){
    total_water_intake += water_amount;
    remaining_water_intake = water_intake_goal - total_water_intake;
    reminder.restart_drink_timer();
    Serial.println("User drank");
}

void User::dayReset(){
    total_water_intake = 0.0f;
    remaining_water_intake = water_intake_goal;
}
