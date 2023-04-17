void setup() {
  DDRB = 0b00110000;
}

void loop() {
  PORTB = 0b00110000;
  delay(1000);
  PORTB = 0b00000000;
  delay(1000);
}
