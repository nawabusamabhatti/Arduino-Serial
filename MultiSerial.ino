#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); 
void setup() {
  Serial.begin(9600); 
  mySerial.begin(9600); 
}
void loop() {
  if (Serial.available() > 0) {
    char outgoingData = Serial.read();
    Serial.print("Sending: ");
    Serial.println(outgoingData);
     mySerial.print(outgoingData);
  }

  delay(100); 
}
