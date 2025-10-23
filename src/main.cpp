#include <Arduino.h>

// // put function declarations here:
// int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
  pinMode(13,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  //for (int i = 0; i < 11; i++){
   // Serial.println(i);
    digitalWrite(13, HIGH);
    delay(1001);
    digitalWrite(13, LOW);
    delay(1001);
  } 

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }