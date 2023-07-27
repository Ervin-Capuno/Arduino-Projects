#include <Servo.h>

//orange wire = the pin
//red wire = 5volts or 3 volts
//brownWire = gnd


const int servoPin = 9;
Servo myServo;
int servoPos;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.println("what angle do you want: [0-180deg]");
  while(Serial.available() == 0){
    
  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);

  while(Serial.available() == 1){
    char c = Serial.read();
  }
  
  

}
