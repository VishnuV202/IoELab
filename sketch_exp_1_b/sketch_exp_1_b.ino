// Hardware - Blink LED on Pin 13 using direct port manipulation

void setup() {

  DDRB |= (1 << DDB5);
}

void loop() {
  
  PORTB ^= (1 << PORTB5);

  delay(1000);
}