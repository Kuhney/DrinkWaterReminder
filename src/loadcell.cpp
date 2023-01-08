#include "loadcell.h"

void Scale::init(void){
  Serial.println("Initializing the scale");
  hx711.begin(DOUT_PIN, SCK_PIN);
  Serial.print("Set calibration value: ");
  Serial.println(calibration_value);
  hx711.set_scale(calibration_value);
  Serial.println("Tare scale");
  hx711.tare();
  hx711.power_down();
  Serial.println("Scale put to sleep");
}


void Scale::calibrateWithSerial(void)
{
  Serial.println("Scale waked up");
  hx711.power_up();
  hx711.set_scale();
  hx711.tare();
  bool not_ready = true;
  float known_weight = 0.0f;
  while (not_ready){
    Serial.println("Place known weight on scale. What is its weight?:");
    while (Serial.available() == 0) {}  
    String known_weight_str = Serial.readString();
    known_weight = known_weight_str.toFloat();
    if(known_weight != 0){
      Serial.print("Input: ");
      Serial.println(known_weight);
      not_ready = false;
    }else{
      Serial.println("Incorrect Input. Try again!:");
      not_ready = true;
    }
  }
  Serial.println("Measuring...");
  float measured_weight = hx711.get_units(10);
  Serial.print("Measured: ");
  Serial.println(measured_weight);
  calibration_value = measured_weight / known_weight;
  hx711.set_scale(calibration_value);
  Serial.print("Calibration Value = ");
  Serial.println(calibration_value);
  Serial.print("Scale now measures: ");
  Serial.println(hx711.get_units(10));
  hx711.power_down();
  Serial.println("Scale put to sleep");
}

float Scale::measure(){
  hx711.power_up();
  float measurement = hx711.get_units(10);
  hx711.power_down();
  Serial.print("Scale measured: ");
  Serial.println(measurement);
  return measurement;
}

void Scale::setCalibrationValue(float value){
  calibration_value = value;
}
