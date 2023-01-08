#ifndef USER_H
#define USER_H

enum e_activity_level {low=0, middle=5, high=10};

class User{
    private:
        float water_intake_goal = 0.0f;
        float current_water_intake = 0.0f;
        float weight = 0.0f;
        e_activity_level activity_level = low;
        
    public:
        void calc_water_intake_goal();
        void drink();
};

#endif // USER_H