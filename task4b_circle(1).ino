#include <Stepper.h>


const int stepsPerRevolution = 200;


Stepper f_motor(stepsPerRevolution,2,3);
Stepper l_motor(stepsPerRevolution,4,5);
Stepper r_motor(stepsPerRevolution,7,6);

unsigned long initialTime;




void setup() {
  f_motor.setSpeed(109.81);
  l_motor.setSpeed(109.81);
  r_motor.setSpeed(109.81);

}

void loop() {
  // put your main code here, to run repeatedly:
  initialTime = millis();
  while (initialTime <= initialTime+3000UL){
    //frontmotor
    l_motor.step(stepsPerRevolution);
    r_motor.step(-stepsPerRevolution);  
  }

  delay(1000);
  initialTime = millis();
  while (initialTime <= initialTime+3000UL){
    //frontmotor
    l_motor.step(-stepsPerRevolution);
    r_motor.step(stepsPerRevolution);  
  }

  delay(1000);
  initialTime = millis();
  while (initialTime <= initialTime+3000UL){
    //frontmotor
    f_motor.step(-2*stepsPerRevolution);
    l_motor.step(stepsPerRevolution);
    r_motor.step(stepsPerRevolution);  
  }

  delay(1000);
  initialTime = millis();
  while (initialTime <= initialTime+3000UL){
    //frontmotor
    f_motor.step(2*stepsPerRevolution);
    l_motor.step(-stepsPerRevolution);
    r_motor.step(-stepsPerRevolution);  
  }

  
  exit(0);
  

}
