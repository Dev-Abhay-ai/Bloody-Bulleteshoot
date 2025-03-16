#include <Servo.h>

Servo myServo;
const int servoPin = 8; 

void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
  Serial.println("Servo Direct Movement Program Started");
}

void loop() {

 
  // Move to 0 degrees
   if (Serial.available()) {  
        String message = Serial.readStringUntil('\n');
        message.trim();
        
        Serial.print("Received: ");  
        Serial.println(message);
  
        if (message == "WIN") {
            myServo.write(0);
  delay(2000);
  
  myServo.write(180);
  delay(2000);
            Serial.println("LED ON 🎉");
        } else if (message == "LOSE") {
            
            Serial.println("LED OFF 😞");
        }
    }
}
