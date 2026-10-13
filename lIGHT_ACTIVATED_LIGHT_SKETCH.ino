const int ldrPin = 2;
const int buzzerPin = 8;

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int lightState = digitalRead(ldrPin);

  // Many LDR modules output LOW when light is detected
  if (lightState == LOW) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW );
  }

  delay(100);
}