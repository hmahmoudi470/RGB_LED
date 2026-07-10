/*#include <Arduino.h>

// Definition der Pins
int LEDblau = 3; 
int LEDrot = 5; 
int LEDgruen = 7; // Korrigiert auf Pin 6

int p = 2000; // Pause 1 Sekunde
int hell = 200; // Helligkeitswert für die Farben
int dunkel = 0; // 0V = Aus

void setup() {
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDgruen, OUTPUT);
  pinMode(LEDrot, OUTPUT);
}

void loop() {
  // 1. Erst Rot
  analogWrite(LEDrot, hell);
  delay(p);
  analogWrite(LEDrot, dunkel);

  // 2. Dann Blau
  analogWrite(LEDblau, hell);
  delay(p);
  analogWrite(LEDblau, dunkel);

  // 3. Danach Grün
  analogWrite(LEDgruen, hell);
  delay(p);
  analogWrite(LEDgruen, dunkel);

  // 4. Am Ende unterschiedliche Farben (Mischfarben)
  // Beispiel: Rot + Blau = Lila
  analogWrite(LEDrot, hell);
  analogWrite(LEDblau, hell);
  delay(p);
  analogWrite(LEDrot, dunkel);
  analogWrite(LEDblau, dunkel);

  // Beispiel: Blau + Grün = Cyan
  analogWrite(LEDblau, hell);
  analogWrite(LEDgruen, hell);
  delay(p);
  analogWrite(LEDblau, dunkel);
  analogWrite(LEDgruen, dunkel);
}*/