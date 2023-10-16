#ifndef USER_H
#define USER_H

#include "reminder.h"
#include "enums.h"

enum e_activity_level {low=0, middle=5, high=10};

class User{
    private:
        e_activity_level activity_level = low;
        const int total_time_to_drink = (12*60);
        float weight = 0.0f;

        float water_intake_goal = 2000.0f;
        float remaining_water_intake = water_intake_goal;
        float water_intake_progress = 0.0f;
        
        void calc_water_intake_goal();
        
    public:
        DrinkStatus drink(float water_intake);
        void dayReset();
};

#endif // USER_H