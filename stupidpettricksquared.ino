#include <Servo.h> //adds the servo library 

Servo servoUnit; //defines the servo 

int jstickLEFT = 4; //maps the joystick X-Axis (Left / Right) to the analog input pins of the Arduino 
int jstickRIGHT = 5;

int stickRead; //defines the variable that will read the Analog joystick output 


void setup() {
  servoUnit.attach(7); //attaches the servo to the (DIGITAL) pin  

}

void loop() {
  stickRead = analogRead(jstickLEFT); //reads the joystick output level when pulled left  
  stickRead = map (stickRead, 0, 1023, 0, 180); //= the servo val between 0 to 180
  servoUnit.write(stickRead); //moves the servo based on joystick position 

  //same as above but reads the joystick output level when pulled right and moves the servo accordingly 
  stickRead = analogRead(jstickRIGHT); 
  stickRead = map (stickRead, 0, 1023, 0, 180); 
  servoUnit.write(stickRead);  
}
