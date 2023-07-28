const int yellowPin = 9;
const int pushButton = 8;
int buttonRead;
int oldButtonState;
int ledState = 0;

void setup() {
  pinMode(yellowPin, OUTPUT);
  pinMode(pushButton, INPUT);
  Serial.begin(9600);

}

void loop() {

  //for normalButton
//  buttonRead = digitalRead(pushButton);
//  Serial.println(buttonRead);
//  delay(500);
//  while(buttonRead == 0){
//    digitalWrite(yellowPin, HIGH);
//    buttonRead = digitalRead(pushButton);
//  }
//  digitalWrite(yellowPin, LOW);

  //for toggleSwitch
  buttonRead = digitalRead(pushButton);

  if(oldButtonState == 0 && buttonRead == 1){
    if(ledState == 0){
      digitalWrite(yellowPin, HIGH);
      ledState =1;
    }
    else{
      digitalWrite(yellowPin, LOW);
      ledState = 0;
    }
  }
  oldButtonState=buttonRead;
 
}
