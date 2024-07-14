int ledPin = 13;  // Pin to control the street light (use appropriate pin)

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();
    if (receivedChar == '1') {
      digitalWrite(ledPin, HIGH);
    } else if (receivedChar == '0') {
      digitalWrite(ledPin, LOW);   // Turn off the light
    }
  }
}
