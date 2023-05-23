/**
 * \par Copyright (C), 2023, superbunnbun
 * @file    Move.ino
 * @author  superbunnbun
 * @version V1.0.0
 * @date    2023/05/23
 * @brief   Description: this file is sample code of Move by Motors.
 */
 #include "MeOrion.h"

MeDCMotor motor3(M1); // Left

MeDCMotor motor4(M2); // Right

uint8_t motorSpeed1 = 200;
uint8_t motorSpeed2 = 100;
uint8_t motorSpeed3 = 0;

void setup()
{
}

void loop()
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
