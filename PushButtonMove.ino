/**
 * \par Copyright (C), 2023, tkyasu999
 * @file    PushButtonMove.ino
 * @author  tkyasu999
 * @version V1.0.0
 * @date    2023/05/23
 * @brief   Description: this file is sample code of Move by Button.
 */
 #include "MeOrion.h"

MeDCMotor motor3(M1); // Left
MeDCMotor motor4(M2); // Right

int switchbuttonPin = A7;   // switch button
uint8_t cntLimit = 2;  // count to move

uint8_t motorSpeed1 = 250;
uint8_t motorSpeed2 = 100;
uint8_t motorSpeed3 = 0;

void setup()
{
  pinMode(switchbuttonPin, INPUT);
  while(!((0 ^ (analogRead(switchbuttonPin) > 10 ? 0 : 1))))
  {
    _loop();
  }

  for(uint8_t cnt = 0; cnt < cntLimit; cnt++)
  {
    move();
  }
}

void _loop()
{

}

void loop()
{
  _loop();
}

void stop()
{
  motor3.stop();
  motor4.stop();
}

void move()
{
  // 1.Advance
  motor3.run(-motorSpeed1);
  motor4.run(motorSpeed1);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 1.Back
  motor3.run(motorSpeed1);
  motor4.run(-motorSpeed1);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 2.right-handed rotation
  motor3.run(-motorSpeed1);
  motor4.run(motorSpeed2);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 2.right-handed rotation back
  motor3.run(motorSpeed1);
  motor4.run(-motorSpeed2);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 3.right-handed rotation
  motor3.run(-motorSpeed1);
  motor4.run(motorSpeed3);
  delay(500);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 3.right-handed rotation back
  motor3.run(motorSpeed1);
  motor4.run(-motorSpeed3);
  delay(500);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 4.left-handed rotation
  motor3.run(-motorSpeed2);
  motor4.run(motorSpeed1);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 4.left-handed rotation back
  motor3.run(motorSpeed2);
  motor4.run(-motorSpeed1);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 5.left-handed rotation
  motor3.run(-motorSpeed3);
  motor4.run(motorSpeed1);
  delay(500);
  motor3.stop();
  motor4.stop();
  delay(1000);

  // 5.left-handed rotation back
  motor3.run(motorSpeed3);
  motor4.run(-motorSpeed1);
  delay(500);
  motor3.stop();
  motor4.stop();
  delay(1000);
}
