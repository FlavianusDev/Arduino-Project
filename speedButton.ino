#define ledRed 2
#define ledGreen 4
#define buttonSpeedUp 6

void setup() {
  Serial.begin(9600);
  pinMode(buttonSpeedUp, INPUT);

//  default state = 1
  digitalWrite(buttonSpeedUp, HIGH);

  
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void speedMode(int option) {
  if(option == 1) {
      digitalWrite(ledRed, HIGH);
    delay(100);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(100);
    digitalWrite(ledGreen, LOW);
    delay(100);
  } else {
    digitalWrite(ledRed, HIGH);
    delay(500);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(500);
    digitalWrite(ledGreen, LOW);
    delay(500);
  }
}

void loop() {
  int isButtonSpeedPressed = digitalRead(buttonSpeedUp);
  
  if(isButtonSpeedPressed == 0) {
    Serial.println("speed button pressed: ");
    Serial.println(isButtonSpeedPressed);
    speedMode(1);
  }else {
    speedMode(0);
  }

}
