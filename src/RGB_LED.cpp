/*#include <Arduino.h>
int LEDb = 3; // Farbe b an Pin 3
int LEDr = 5; // Farbe r an Pin 5
int LEDg=7; // Farbe g an Pin 6
int p=1000; // p ist eine Pause mit 1000ms also 1 Sekunde
int brightness1a = 250; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int brightness1b = 250; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int brightness1c = 250; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int dunkel = 0; // Zahlenwer 0 bedeutet Spannung 0V – also LED aus
void setup()
{
pinMode(LEDb, OUTPUT);
pinMode(LEDg, OUTPUT);
pinMode(LEDr, OUTPUT);
}
void loop()
{
analogWrite(LEDb, brightness1a); // b einschalten
delay(p); // pause
analogWrite(LEDb, dunkel); // b ausschalten
analogWrite(LEDr, brightness1b); // r einschalten
delay(p); // pause
analogWrite(LEDr, dunkel); // rausschalten
analogWrite(LEDg, brightness1c); // g einschalten
delay(p); // pause
analogWrite(LEDg, dunkel); // gausschalten
}*/

/*#include <Arduino.h>
int LEDb = 3; // Farbe b an Pin 3
int LEDr = 5; // Farbe r an Pin 5
int LEDg=6; // Farbe g an Pin 6
int p=1000; // p ist eine Pause mit 1000ms also 1 Sekunde
int brightness1a = 150; // Zahlenwert zwischen 0 und 255 – gibt //die Leuchtstärke der einzelnen Farbe an
int brightness1b = 150; // Zahlenwert zwischen 0 und 255 – gibt //die Leuchtstärke der einzelnen Farbe an
int brightness1c = 150; // Zahlenwert zwischen 0 und 255 – gibt //die Leuchtstärke der einzelnen Farbe an
int dunkel = 0; // Zahlenwert 0 bedeutet Spannung 0V – also LED
//aus
void setup()
{
    pinMode(LEDb, OUTPUT);
    pinMode(LEDg, OUTPUT);
    pinMode(LEDr, OUTPUT); 
}
void loop()
{
analogWrite(LEDg, brightness1c); // g und r ein = gelb
analogWrite(LEDr, brightness1b);
delay(p);
analogWrite(LEDg, dunkel); // g und r aus = gelb aus
analogWrite(LEDr, dunkel);
analogWrite(LEDg, brightness1c); // g und b ein =
//türkis
analogWrite(LEDb, brightness1b);
delay(p);
analogWrite(LEDg, dunkel); // g und b aus = türkis aus
analogWrite(LEDb, dunkel);
analogWrite(LEDr, brightness1b); // r und b ein = lila
analogWrite(LEDb, brightness1b);
delay(p);
analogWrite(LEDr, dunkel); // r und b aus = lila aus
analogWrite(LEDb, dunkel);
}*/

