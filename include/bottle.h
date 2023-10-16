#ifndef BOTTLE_H
#define BOTTLE_H

#include "loadcell.h"
#include "enums.h"

class Bottle{
    public:
        float weight = 0.0f;
        float volume = 0.0f;
        float consumed_volume = 0.0f;

        BottleUpdateOptions update(Scale scale);
        float convert_weight_to_ml(float weight);
};

#endif // BOTTLE_H