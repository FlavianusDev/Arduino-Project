
// horizonatl: {a, b, c, d, e, f, g}
byte digit[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, //  0
  {0, 1, 1, 0, 0, 0, 0}, //  1
  {1, 1, 0, 1, 1, 0, 1}, //  2
  {1, 1, 1, 1, 0, 0, 1}, //  3
  {0, 1, 1, 0, 0, 1, 1}, //  4
  {1, 0, 1, 1, 0, 1, 1}, //  5
  {1, 0, 1, 1, 1, 1, 1}, //  6
  {1, 1, 1, 0, 0, 0, 0}, //  7
  {1, 1, 1, 1, 1, 1, 1}, //  8
  {1, 1, 1, 1, 0, 1, 1}  //  9
};

// mapping pin accordingg segmen list {a, b, c, d, e, f, g}
// according request: a=pin 7, b=pin 6, c=pin 5, d=pin 4, e=pin 3, f=pin 2, g=pin 1
int pinSegmen[7] = {7, 6, 5, 4, 3, 2, 1}; 

void setup() {
  // setting digital pin 1 to 7 as OUTPUT
  for (int i = 0; i < 7; i++) {
    pinMode(pinSegmen[i], OUTPUT);
  }
}

void loop() {
  // display 0 to 9 
  for (int number = 0; angka < 10; angka++) {
    displayNumber(number);
    delay(1000); // delay 1 second
  }
}

// turn on segment
void displayNumber(int n) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pinSegmen[i], digit[n][i]);
  }
}
