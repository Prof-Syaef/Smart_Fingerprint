const int BUTTON_PIN = 4; // BUTTON PINS
const int BUZZER_PIN  = 5; // BUZZER PIN 


void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(BUZZER_PIN, OUTPUT);        // set arduino pin to output mode
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state
  Serial.print ("buttonState =");
  Serial.println (buttonState);
  if (buttonState == LOW) {
    Serial.println("The button is being pressed | BUZZER ON");
    digitalWrite(BUZZER_PIN, HIGH); // relay turn on, karena aktif low.
  }
  else if (buttonState == HIGH) {
    Serial.println("The button is unpressed | BUZZER OFF");
    digitalWrite(BUZZER_PIN, LOW);  // turn off
  }
}
