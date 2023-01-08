#include "main.h"     // Main header

// C++ standard library headers (without file extension), e.g., <algorithm>, <cstddef>.

#include "station.h"

Station station;

void setup(){
    Serial.begin(38400);
    station.init();
}

void loop(){
    station.set_change_detected(true);
    if(station.get_change_detected()){
        station.update();
    }
}