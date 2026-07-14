/*#include <Arduino.h>

// Definition der Pins
int LEDb = 3; 
int LEDr = 5; 
int LEDg = 7; // Korrigiert auf Pin 6

int p = 2000; // Pause 1 Sekunde
int hell = 200; // Helligkeitswert für die Farben
int dunkel = 0; // 0V = Aus

void setup() {
  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDr, OUTPUT);
}

void loop() {
  // 1. Erst r
  analogWrite(LEDr, hell);
  delay(p);
  analogWrite(LEDr, dunkel);

  // 2. Dann b
  analogWrite(LEDb, hell);
  delay(p);
  analogWrite(LEDb, dunkel);

  // 3. Danach Grün
  analogWrite(LEDg, hell);
  delay(p);
  analogWrite(LEDg, dunkel);

  // 4. Am Ende unterschiedliche Farben (Mischfarben)
  // Beispiel: r + b = Lila
  analogWrite(LEDr, hell);
  analogWrite(LEDb, hell);
  delay(p);
  analogWrite(LEDr, dunkel);
  analogWrite(LEDb, dunkel);

  // Beispiel: b + Grün = Cyan
  analogWrite(LEDb, hell);
  analogWrite(LEDg, hell);
  delay(p);
  analogWrite(LEDb, dunkel);
  analogWrite(LEDg, dunkel);
}*/