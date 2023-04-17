// 1. AND
/*
const int buttonPin = 2;

byte a = 0b1100;
byte b = 0b1101;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);
  byte c = a & b;

  if (reading == HIGH) {
    Serial.println((String) "int c = a & b");
    Serial.println((String) "c = " + c);
  }
}
*/
// 2. OR
/*
const int buttonPin = 2;

int a = 92;
int b = 101;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);
  int c = a | b;

  if (reading == HIGH) {
    Serial.println((String) "int c = a | b");
    Serial.println((String) "c = " + c);
  }
}
*/
// 3. XOR
/*
const int buttonPin = 2;

int a = 12;
int b = 10;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);
  int c = a ^ b;

  if (reading == HIGH) {
    Serial.println((String) "int c = a ^ b");
    Serial.println((String) "c = " + c);
  }
}
*/
// 4. NOT
/*
const int buttonPin = 2;

int a = 103;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);
  int b = ~a;

  if (reading == HIGH) {
    Serial.println((String) "int b = ~a");
    Serial.println((String) "b = " + b);
  }
}
*/
// 5. Shift

const int buttonPin = 2;

int a = 5;
int b = a << 3;
int c = b >> 3;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading == HIGH) {
    Serial.println("int a = 5");
    Serial.println("int b = a << 3");
    Serial.println("int c = b >> 3");
    Serial.println((String) "b = " + b);
    Serial.println((String) "c = " + c);
  }
}