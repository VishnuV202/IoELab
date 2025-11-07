// 2.a.Hardware - Blink pins 8 (PB0) and 9 (PB1) using direct port register manipulation
// Toggle every 100 ms

void setup() {
  DDRB |= (1 << DDB0) | (1 << DDB1);
}

void loop() {
  
  PORTB ^= (1 << PORTB0) | (1 << PORTB1);

  delay(100);
}