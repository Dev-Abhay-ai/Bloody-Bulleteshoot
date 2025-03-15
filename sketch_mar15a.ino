#include <Servo.h>

Servo myServo;  // Create a servo object
const int servoPin = 8;  // Pin where servo is connected

void setup() {
  myServo.attach(servoPin);  // Attaches the servo on specified pin
  Serial.begin(9600);        // Initialize serial communication
  Serial.println("Servo Direct Movement Program Started");
}

void loop() {

 
  // Move to 0 degrees
   if (Serial.available()) {  
        String message = Serial.readStringUntil('\n');
        message.trim();
        
        Serial.print("Received: ");  
        Serial.println(message);  // Show in Web Serial Monitor
  
        if (message == "WIN") {
            myServo.write(0);
  delay(2000);  // Wait 1 second
  
  // Move to 180 degrees
  myServo.write(180);
  delay(2000);
            Serial.println("LED ON 🎉");  // Send status back
        } else if (message == "LOSE") {
            
            Serial.println("LED OFF 😞");
        }
    }
 // Wait 1 second
}
