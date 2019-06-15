
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 KC trial for Camera filter wheel 

 Date: 06/14/2019

 */

#include <Stepper.h>

const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
const int stepsEachFilter = 320; // each angle is 56.25
const int stepsBacktobeginning = 1600; // back to beginning
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

/*
 * pin8->controller IN1
 * pin9->controller IN3
 * pin10->controller IN2
 * pin11->controller IN4
 * https://forum.arduino.cc/index.php?topic=86339.0

 */

void setup() {
  // set the speed at 60 rpm:
   myStepper.setSpeed(10);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {

  // step one revolution  in one direction:
  Serial.println("frist");
  myStepper.step(stepsEachFilter);
  delay(1000);
  
  Serial.println("second");
  myStepper.step(stepsEachFilter);
  delay(1000);
  
  Serial.println("third");
  myStepper.step(stepsEachFilter);
  delay(1000);
  
  Serial.println("forth");
  myStepper.step(stepsEachFilter);
  delay(1000);
  
  Serial.println("fifth");
  myStepper.step(stepsEachFilter);
  delay(1000);

  Serial.println("back");
  myStepper.step(stepsBacktobeginning);
  delay(1000);


  

 
}

