// L298N Dual H-Bridge Motor Controller script
#include "MotorControl.h"

Motor motorA = Motor(7,8,9);

void setup()
{
  pinMode(13, OUTPUT);  
}

void loop()
{
  digitalWrite(13, HIGH);
  motorA.Run(MotorAction::Forward, 200);
  delay(1000);
  
  digitalWrite(13, LOW);  
  motorA.Run(MotorAction::Stop, 200);  
  delay(1000);
  
  digitalWrite(13, HIGH);  
  motorA.Run(MotorAction::Reverse, 200);
  delay(1000);
  
  digitalWrite(13, LOW);  
  motorA.Run(MotorAction::Stop, 200);  
  delay(1000);
}

