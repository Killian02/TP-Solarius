//!/usr/bin/C++
//   -*- coding: utf-8 -*-
// Date: Sunday 15 June 2021 19h02:01 CEST
// Author: Killian Peronnet
// Last updated by: Killian Peronnet
// Last updated time: Sunday 17 June 2021 18:20:20 CEST
// Description: Data Logger


#include <Servo.h>
  
Servo servo1;
Servo servo2;
int joyX = 0;
int joyY = 1;
  
int servoVal;
  
void setup() 
{
  servo1.attach(3);
  servo2.attach(5);
}
  
void loop()
{
  
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);

  servoVal = analogRead(joyY);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);
  delay(15);  
}
