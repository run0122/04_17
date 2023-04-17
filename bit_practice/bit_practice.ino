const int buttonPin = 2;

void setup() {
  DDRB = 0b00110000;
  Serial.begin(9600);
}

void loop() {
  bool buttonState = PIND & (1 << buttonPin);
  Serial.println(buttonState);
  //            249 : 11111001
  //            253 : 11111101
  //              1 : 00000001
  // 1 << buttonPin : 00000100
  
  if ((PIND & (1 << buttonPin)) == 0b00000100) {
    blink();
  }
}

void blink() {
  PORTB = 0b00110000;
  delay(1000);
  PORTB = 0b00000000;
  delay(1000);
}