int potPin = A0;
int led = 7;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(potPin);
  if (value > 512) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(value);
  delay(100);
}
