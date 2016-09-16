/*
 * This example shows how to use the Arduino-HMC5983 library,
 * by configuring up to 220Hz the HMC5983 with the DRDY int.
 */
#include <HMC5983.h>

HMC5983 compass;
boolean compass_rdy = false;
uint8_t counter = 0;
uint32_t last_read_time = 0;
uint16_t read_time = 0;

void readCompass_ISR() {
  compass_rdy = true;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000); // this is going to be hot... :)

  while (!compass.begin(readCompass_ISR, 0)) {
    Serial.println("HMC5983 Problem");
    delay(500);
  }  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (compass_rdy) {
    compass_rdy = false;
    
    double heading = compass.read(); // heading in 0-360º format
    read_time = (micros() - last_read_time) / 1000;
    last_read_time = micros();
    if (fmod(counter, 1.5) == 0) {
      Serial.println("heading=" + String(heading, DEC) + ", ms=" + String(read_time, DEC)); 
    }
    counter++;
  }
}
