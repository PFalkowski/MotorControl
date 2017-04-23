 #include "MotorControl.h"
 
 Motor motorA = Motor(7, 8, 9);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255) //values below 100 tend to not generate enough current for my motor to move, only to 'buzz', so be carreful to not dammage your motor
    {
      motorA.Run(MotorAction::Forward, speed);
    }
  }
}
