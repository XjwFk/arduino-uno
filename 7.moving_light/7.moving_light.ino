#define FIRST_LED_PIN 2
#define LAST_LED_PIN 11

void setup() {
  // put your setup code here, to run once:
//for (int pin = FIRST_LED_PIN; pin <= FIRST_LED_PIN; ++pin) {
//  pinMode(pin, OUTPUT);
//}
pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//unsigned long int ms = millis();
//int pin = FIRST_LED_PIN + (ms / 120) % 10;
int pin = 2;
digitalWrite(pin, HIGH);
delay(10);
digitalWrite(pin, LOW);
}
