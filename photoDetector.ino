const int lightPin = A0;
const int redPin = 7;
const int greenPin = 6;
int readLight;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  readLight = analogRead(lightPin);
  
  Serial.println(readLight);
  delay(100);

  if(readLight >= 157){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  else if(readLight<= 156){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  
}
