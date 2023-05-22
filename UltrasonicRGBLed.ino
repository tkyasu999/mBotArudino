/**
 * \par Copyright (C), 2023, superbunnbun
 * @file    UltrasonicRGBLed.ino
 * @author  superbunnbun
 * @version V1.0.0
 * @date    2023/05/22
 * @brief   Description: this file is sample code of RGB LED that respond by infrared rays for mBot.
 */
 #include "MeOrion.h"

MeUltrasonicSensor ultraSensor(PORT_6); /* Ultrasonic module */
MeRGBLed led(PORT_3);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Distance : ");
  Serial.print(ultraSensor.distanceCm() );
  Serial.println(" cm");

  if(ultraSensor.distanceCm() < 50) {
    color_loop();
  }

  delay(500); // the minimal measure interval is 500 milliseconds
}

void color_loop()
{
  uint8_t i	= random(0, 255);
  uint8_t j = random(0, 255);
  uint8_t k = random(0, 255);

  Serial.print("i, j, k: ");
  Serial.print(i);
  Serial.print(",");
  Serial.print(j);
  Serial.print(",");
  Serial.println(k);
  
  led.setColorAt(0, i, j, k); // left, LED side, 1: Red, 2: Green, 3: Blue
  led.setColorAt(1, k, j, i); // right, Switching button side, 1: Red, 2: Green, 3: Blue
  led.show();
}