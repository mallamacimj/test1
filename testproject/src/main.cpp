#include <Arduino.h>
#include "my_functions.hpp"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("hello world");
  int y = 0;
  int z = addtwo(y);
  Serial.println(z);
  delay(800);
}
