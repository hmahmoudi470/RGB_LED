/*#include <Arduino.h>

// Definition der Pins
const int LEDblau = 3; 
const int LEDrot = 5; 
const int LEDgruen = 6;

// Zeit für den Übergang (je kleiner, desto schneller der Wechsel)
int speed = 10; 

void setup() {
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDgruen, OUTPUT);
  pinMode(LEDrot, OUTPUT);
}

// Funktion für den fließenden Übergang
// pinA: Pin, der dunkler werden soll
// pinB: Pin, der heller werden soll
void fadeColor(int pinA, int pinB) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(pinB, i);       // Neue Farbe wird heller
    analogWrite(pinA, 255 - i); // Alte Farbe wird dunkler
    delay(speed);
  }
}

void loop() {
  // 1. Start mit Rot
  analogWrite(LEDrot, 255);
  analogWrite(LEDblau, 0);
  analogWrite(LEDgruen, 0);
  delay(1000);

  // 2. Übergang Rot zu Blau
  fadeColor(LEDrot, LEDblau);
  delay(500);

  // 3. Übergang Blau zu Grün
  fadeColor(LEDblau, LEDgruen);
  delay(500);

  // 4. Übergang Grün zu Rot
  fadeColor(LEDgruen, LEDrot);
  delay(500);
}*/