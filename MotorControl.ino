 #include "src\MotorControl.h"
 
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
    if (speed >= 0 && speed <= 255)
    {
      motorA.Run(MotorAction::Forward, speed);
    }
  }
}
