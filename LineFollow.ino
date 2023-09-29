/**
 * \par Copyright (C), 2023, tkyasu999
 * @file    LineFollow.ino
 * @author  tkyasu999
 * @version V1.0.0
 * @date    2023/09/29
 * @brief   Description: this file is sample code that detects and moves on the black line.
 */

#include <MeMCore.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

MeLineFollower linefollower_2(2);
MeDCMotor motor_9(9);
MeDCMotor motor_10(10);

void move(int direction, int speed) {
  int leftSpeed = 0;
  int rightSpeed = 0;
  if(direction == 1) {
    leftSpeed = speed;
    rightSpeed = speed;
  } else if(direction == 2) {
    leftSpeed = -speed;
    rightSpeed = -speed;
  } else if(direction == 3) {
    leftSpeed = -speed;
    rightSpeed = speed;
  } else if(direction == 4) {
    leftSpeed = speed;
    rightSpeed = -speed;
  }
  motor_9.run((9) == M1 ? -(leftSpeed) : (leftSpeed));
  motor_10.run((10) == M1 ? -(rightSpeed) : (rightSpeed));
}

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  while(1) {
      if(linefollower_2.readSensors() == 0.000000){

          move(1, 80 / 100.0 * 255);

      }
      if(linefollower_2.readSensors() == 1.000000){

          motor_9.run(-1*0/100.0*255);

          motor_10.run(1*50/100.0*255);

      }
      if(linefollower_2.readSensors() == 2.000000){

          motor_9.run(-1*50/100.0*255);

          motor_10.run(1*0/100.0*255);

      }
      if(linefollower_2.readSensors() == 3.000000){

          move(2, 40 / 100.0 * 255);

      }

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}

