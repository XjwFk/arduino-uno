void setup() {
  // put your setup code here, to run once:
  #define LED_PIN 9
  
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_PIN, 85);
  delay(250);

  analogWrite(LED_PIN, 170);
  delay(250);

  digitalWrite(LED_PIN, 255);
  delay(250);

  analogWrite(LED_PIN, 0);
  delay(250);
}
