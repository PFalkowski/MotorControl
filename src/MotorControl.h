/*
  MotorControl.h - Library for controling motors using motor driver.
  Created by Piotr Falkowski, © 2017.
  This library is a thin layer of abstraction over the pin numbers and connections.
*/
#include "Arduino.h"
#ifndef MotorControl_h
#define MotorControl_h

enum MotorAction
{
  Stop = 0,
  Forward = 1,
  Reverse = 2,
  Backward = Reverse,
  Break = Stop
};

class Motor
{
  private:
    const int input1Pin;
    const int input2Pin;
    const int pwmPin;
  public:
    Motor(int in1, int in2, int pwm);
    void Run(MotorAction actionType, byte strength);
};

#endif

