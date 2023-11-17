#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); 

void setup() {
  Serial.begin(9600);      
  mySerial.begin(9600);
  }

void loop() {
  if (mySerial.available() > 0) {
    char incomingData = mySerial.read();
    Serial.print("Received: ");
    Serial.println(incomingData);
  }
  delay(100); 
}
