#ifndef BOTTLE_H
#define BOTTLE_H

#include "loadcell.h"

class Bottle{
    public:
        float full_weight = 0.0f;
        float empty_weight = 0.0f;
        float current_weight = 0.0f;
        float last_weight = 0.0f;
        float current_weight_diff = 0.0f;

        void update_weigth(Scale scale);
        float convert_weight_to_ml(float weight);
};

#endif // BOTTLE_H