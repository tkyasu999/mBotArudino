/**
 * \par Copyright (C), 2023, superbunnbun
 * @file    RGBLed.ino
 * @author  superbunnbun
 * @version V1.0.0
 * @date    2023/05/21
 * @brief   Description: this file is sample code of RGB LED for mBot.
 */
 #include "MeOrion.h"

MeRGBLed led(PORT_3);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  color_loop();
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

  delay(500); // the minimal measure interval is 500 milliseconds
}