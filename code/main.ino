// Pin definitions
const int RELAY_PIN = 8;    // Digital pin connected to the relay module
const int BUTTON_PUSH = 7;  // Digital pin connected to the button's power source (always active)
const int BUTTON_PIN = 2;   // Digital pin connected to the button

int buttonState;

void setup() {
  // Configure pins
  pinMode(RELAY_PIN, OUTPUT);    // Set relay pin as output
  pinMode(BUTTON_PUSH, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);    // Set button pin as input
  
  // Initialize outputs to OFF state
  digitalWrite(RELAY_PIN, LOW);
  digitalWrite(BUTTON_PUSH, HIGH);
}

void loop() {
  // Read the current state of the button
  buttonState = digitalRead(BUTTON_PIN);
  digitalWrite(BUTTON_PUSH, HIGH);
  
  // If button is pressed (HIGH), activate the solenoid
  if (buttonState == HIGH) {
    digitalWrite(RELAY_PIN, HIGH);  // Turn ON solenoid
  } else {
    digitalWrite(RELAY_PIN, LOW);   // Turn OFF solenoid
  }
}