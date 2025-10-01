int red = 8;
int yellow = 9;
int green = 10;
int button = 2;
bool request = false;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  digitalWrite(green, HIGH);
  for (int i = 0; i < 50; i++) {
    if (digitalRead(button) == LOW) {
      request = true;
    }
    delay(100);
    if (request) break;
  }
  digitalWrite(green, LOW);

  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);

  digitalWrite(red, HIGH);
  if (request) {
    delay(5000);
    request = false;
  } else {
    delay(3000);
  }
  digitalWrite(red, LOW);
}
