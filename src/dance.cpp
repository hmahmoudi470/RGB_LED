/*#include <Arduino.h>

// Pins
const int LEDb = 3;
const int LEDr = 5;
const int LEDg = 6;

// Variablen
int hell = 200;

void setup() {
  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDr, OUTPUT);
}

// Hilfsfunktion zum einfachen Setzen der Farben
void setRGB(int r, int g, int b) {
  analogWrite(LEDr, r);
  analogWrite(LEDg, g);
  analogWrite(LEDb, b);
}

void loop() {
  // --- TEIL 1: Sanfte Übergänge (Fading) ---
  // Von r zu b
  for (int i = 0; i <= hell; i++) {
    setRGB(hell - i, 0, i);
    delay(10);
  }
  // Von b zu Grün
  for (int i = 0; i <= hell; i++) {
    setRGB(0, i, hell - i);
    delay(10);
  }
  // Von Grün zu r
  for (int i = 0; i <= hell; i++) {
    setRGB(i, hell - i, 0);
    delay(10);
  }

  // --- TEIL 2: Schneller Farbwechsel (Stroboskop) ---
  for (int i = 0; i < 20; i++) {
    setRGB(hell, 0, 0); delay(50); // r
    setRGB(0, hell, 0); delay(50); // Grün
    setRGB(0, 0, hell); delay(50); // b
    setRGB(hell, hell, 0); delay(50); // Gelb
  }
}*/