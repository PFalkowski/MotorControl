 #include "MotorControl.h"
 
 Motor motorA = Motor(7, 8, 9);

void setup()
{
	pinMode(13, OUTPUT);
}

void loop()
{
	digitalWrite(13, HIGH);
	motorA.Run(MotorAction::Forward, 255);
	delay(1000);

	digitalWrite(13, LOW);
	motorA.Run(MotorAction::Reverse, 127);
	delay(1000);
}