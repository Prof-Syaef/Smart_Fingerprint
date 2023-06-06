const int ledPin  =  8;//RELAY IN2
const int ledPin1 =  9;//RELAY IN1

int ledState = LOW;           
unsigned long previousMillis = 0;        
const long interval = 500;           

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
  digitalWrite(ledPin1, LOW);
  delay (500);
  digitalWrite(ledPin1, HIGH);
  delay (500);
}
