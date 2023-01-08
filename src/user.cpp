#include "user.h"

void User::calc_water_intake_goal(){
    water_intake_goal = weight*(30+activity_level);
}

void User::drink(){
    
}
