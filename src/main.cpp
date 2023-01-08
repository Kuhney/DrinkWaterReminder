#include "main.h"     // Main header

// C++ standard library headers (without file extension), e.g., <algorithm>, <cstddef>.

#include "loadcell.h"
#include "led.h"

Scale scale;
LED led;

void setup(){
    Serial.begin(38400);
    scale.init();
    scale.setCalibrationValue(2280.0f);
    led.init();
}

void loop(){
    scale.measure();
    led.notificate();
    delay(1000);
    led.endNotification();
}