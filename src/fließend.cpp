/*#include <Arduino.h>

// Definition der Pins
const int LEDb = 3; 
const int LEDr = 5; 
const int LEDg = 6;

// Zeit für den Übergang (je kleiner, desto schneller der Wechsel)
int speed = 10; 

void setup() {
  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDr, OUTPUT);
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
  // 1. Start mit r
  analogWrite(LEDr, 255);
  analogWrite(LEDb, 0);
  analogWrite(LEDg, 0);
  delay(1000);

  // 2. Übergang r zu b
  fadeColor(LEDr, LEDb);
  delay(500);

  // 3. Übergang b zu Grün
  fadeColor(LEDb, LEDg);
  delay(500);

  // 4. Übergang Grün zu r
  fadeColor(LEDg, LEDr);
  delay(500);
}*/