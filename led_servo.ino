#include <Servo.h>

Servo myservo;

int pos = 0;
int direction = 1;  // 1 = naik, -1 = turun
unsigned long lastServoMove = 0;
unsigned long lastLedToggle = 0;
bool ledState = false;

void setup() {
  pinMode(9, OUTPUT);       // LED di pin 9
  myservo.attach(10);       // Servo di pin 10
  myservo.write(pos);       // Set awal servo
}

void loop() {
  unsigned long currentMillis = millis();

  // Toggle LED setiap 1000ms
  if (currentMillis - lastLedToggle >= 1000) {
    ledState = !ledState;
    digitalWrite(9, ledState ? HIGH : LOW);
    lastLedToggle = currentMillis;
  }

  // Gerakkan servo tiap 15ms
  if (currentMillis - lastServoMove >= 15) {
    pos += direction;
    myservo.write(pos);
    if (pos >= 180 || pos <= 0) {
      direction = -direction;  // balik arah
    }
    lastServoMove = currentMillis;
  }
}

