extern "C"{
  #include <DLCI.h>
  #include <DirectionalLightingFunc.h>
}

#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {

  pinMode(8,INPUT);
  pinMode(9,INPUT);

  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {

  DLCI_U.rightSW_B=digitalRead(8);
  DLCI_U.leftSW_B = digitalRead(9);
  // put your main code here, to run repeatedly:
  DLCI_DirectionalLightingFunc(DLCI_U.rightSW_B, DLCI_U.leftSW_B,
    &DLCI_Y.rightLight_B, &DLCI_Y.leftLight_B);

    digitalWrite(10,DLCI_Y.rightLight_B);
    digitalWrite(11,DLCI_Y.leftLight_B);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}