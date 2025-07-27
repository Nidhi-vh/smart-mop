#include <Servo.h>

Servo myservo;
int i = 0;
#define pos 180

void setup() {
  Serial.begin(115200);
  myservo.attach(D1);
  delay(1000);
}

void loop() {
  
  for(i = 0; i <= pos; i++) {
    myservo.write(i);
    delay(1);
  }

  for(i = pos; i >= 0; i--) {
    myservo.write(i);
    delay(1);
  }
}

