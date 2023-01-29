#include "main.h"     // Main header

// C++ standard library headers (without file extension), e.g., <algorithm>, <cstddef>.

#include "station.h"


Station station;

volatile bool button_pressed = false;

void isr(){
    if(!button_pressed){
        button_pressed=true;
        Serial.println("Button pressed");
    }
}

void setup(){
    Serial.begin(9600);
    Serial.println("Start");

    pinMode(BUTTON_PIN, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), isr, FALLING);

    // station.scale.calibrateWithSerial();
    station.init();
}

void loop(){
    if(button_pressed){
        button_pressed=false;
        station.update();
    }
    if(station.reminder.check_drink_timer()){
        station.notify();
    }
}

