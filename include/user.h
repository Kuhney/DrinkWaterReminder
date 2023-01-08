#ifndef USER_H
#define USER_H

#include "reminder.h"

enum e_activity_level {low=0, middle=5, high=10};

class User{
    private:
        Reminder reminder;
        e_activity_level activity_level = low;
        const int total_time_to_drink = (12*60);
        float weight = 0.0f;

        float water_intake_goal = 0.0f;
        float remaining_water_intake = 0.0f;
        float total_water_intake = 0.0f;
        
        void calc_water_intake_goal();
        
    public:
        void drink(float water_intake);
        void dayReset();
};

#endif // USER_H