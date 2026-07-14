#include <Arduino.h>
int LEDblau = 3;
int LEDrot = 5;
int LEDgruen = 9;
int p = 1000;      // 1 Sekunde Pause
int hell = 250;    // Helligkeit
int dunkel = 0;    // Aus
void allesAus() { // Hilfsfunktion: Schaltet alles aus
  analogWrite(LEDrot, dunkel);
  analogWrite(LEDblau, dunkel);
  analogWrite(LEDgruen, dunkel);
}
void setup() {
  pinMode(LEDblau, OUTPUT);
  pinMode(LEDgruen, OUTPUT);
  pinMode(LEDrot, OUTPUT);
}
void setRGB(int r, int g, int b) {
  analogWrite(LEDrot, r);
  analogWrite(LEDgruen, g);
  analogWrite(LEDblau, b);
}

void loop() {
  // --- TEIL 1: Sanfte Übergänge (Fading) ---
  // Von Rot zu Blau
  for (int i = 0; i <= hell; i++) {
    setRGB(hell - i, 0, i);
    delay(10);
  }
  // Von Blau zu Grün
  for (int i = 0; i <= hell; i++) {
    setRGB(0, i, hell - i);
    delay(10);
  }
  // Von Grün zu Rot
  for (int i = 0; i <= hell; i++) {
    setRGB(i, hell - i, 0);
    delay(10);
  }
  // --- TEIL 2: Schneller Farbwechsel (Stroboskop) ---
  for (int i = 0; i < 20; i++) {
    setRGB(hell, 0, 0); delay(50); // Rot
    setRGB(0, hell, 0); delay(50); // Grün
    setRGB(0, 0, hell); delay(50); // Blau
    setRGB(hell, hell, 0); delay(50); // Gelb
  }
}

// Hier steht dein Code, den du geschrieben hast...
int main() {
    init(); // Initialisiert die Hardware
    setup(); // Ruft einmalig deine setup()-Funktion auf
    
    while(true) {
        loop(); // Ruft dauerhaft deine loop()-Funktion auf
        if (serialEventRun) serialEventRun(); // Optional für serielle Kommunikation
    }
    
    return 0;
}