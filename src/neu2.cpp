#include <Arduino.h>
int LEDb = 3;
int LEDr = 5;
int LEDg = 9;
int p = 1000;      // 1 Sekunde Pause
int hell = 250;    // Helligkeit
int dunkel = 0;    // Aus
void allesAus() { // Hilfsfunktion: Schaltet alles aus
  analogWrite(LEDr, dunkel);
  analogWrite(LEDb, dunkel);
  analogWrite(LEDg, dunkel);
}
void setup() {
  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  pinMode(LEDr, OUTPUT);
}
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