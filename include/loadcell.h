#ifndef LOADCELL_H
#define LOADCELL_H

#include "HX711.h"

#include "pinout.h"

class Scale{
    private:
        HX711 hx711;
    	
        const int DOUT_PIN = LOADCELL_DOUT_PIN;
        const int SCK_PIN = LOADCELL_SCK_PIN;

        float calibration_value = 0.0f;

    public:
        void init();
        void calibrateWithSerial();
        float measure();
        void setCalibrationValue(float value);
};

#endif // LOADCELL_H