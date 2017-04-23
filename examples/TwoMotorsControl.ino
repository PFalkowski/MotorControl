 #include "src\MotorControl.h"
 
 Motor motorA = Motor(7, 8, 9);
 Motor motorB = Motor(13, 12, 11);

void setup()
{
}

void loop()
{
   // Run both motors forward at full speed
   motorA.Run(MotorAction::Forward, 255);
   motorB.Run(MotorAction::Forward, 255);
}
