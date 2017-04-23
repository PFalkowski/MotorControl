 #include "MotorControl.h"
 #include "Arduino.h"

 Motor::Motor(int in1, int in2, int pwm) : input1Pin(in1), input2Pin(in2), pwmPin(pwm)
{  
  pinMode(input1Pin, OUTPUT);
  pinMode(input2Pin, OUTPUT);
  pinMode(pwmPin, OUTPUT);
}

 
void Motor::Run(MotorAction actionType, byte strength)
{
    switch (actionType) 
    {

    case MotorAction::Forward:
      digitalWrite(input1Pin, HIGH);
      digitalWrite(input2Pin, LOW);
      analogWrite(pwmPin, strength);
      break;

    case MotorAction::Reverse:
      digitalWrite(input1Pin, LOW);
      digitalWrite(input2Pin, HIGH);
      analogWrite(pwmPin, strength);
      break;

    case MotorAction::Stop:
    default:
      digitalWrite(input1Pin, LOW);
      digitalWrite(input2Pin, LOW);
      analogWrite(pwmPin, 0);
      break;
    }
}

