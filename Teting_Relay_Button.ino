const int BUTTON_PIN = 4; // BUTTON PINS
const int RELAY_PIN  = 9; // RELAY PINS IN1


void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(RELAY_PIN, OUTPUT);        // set arduino pin to output mode
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state
  Serial.print ("buttonState =");
  Serial.println (buttonState);
  if (buttonState == LOW) {
    Serial.println("The button is being pressed | Relay IN1 ON");
    digitalWrite(RELAY_PIN, LOW); // relay turn on, karena aktif low.
  }
  else if (buttonState == HIGH) {
    Serial.println("The button is unpressed | Relay IN1 OFF");
    digitalWrite(RELAY_PIN, HIGH);  // turn off
  }
}
