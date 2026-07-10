/*#include <Arduino.h>
int LEDblau = 3; // Farbe blau an Pin 3
int LEDrot = 5; // Farbe rot an Pin 5
int LEDgruen=7; // Farbe gruen an Pin 6
int p=1000; // p ist eine Pause mit 1000ms also 1 Sekunde
int brightness1a = 250; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int brightness1b = 250; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int brightness1c = 250; // Zahlenwert zwischen 0 und 255 – gibt die Leuchtstärke der einzelnen Farbe an
int dunkel = 0; // Zahlenwer 0 bedeutet Spannung 0V – also LED aus
void setup()
{
pinMode(LEDblau, OUTPUT);
pinMode(LEDgruen, OUTPUT);
pinMode(LEDrot, OUTPUT);
}
void loop()
{
analogWrite(LEDblau, brightness1a); // blau einschalten
delay(p); // pause
analogWrite(LEDblau, dunkel); // blau ausschalten
analogWrite(LEDrot, brightness1b); // rot einschalten
delay(p); // pause
analogWrite(LEDrot, dunkel); // rotausschalten
analogWrite(LEDgruen, brightness1c); // gruen einschalten
delay(p); // pause
analogWrite(LEDgruen, dunkel); // gruenausschalten
}*/

/*#include <Arduino.h>
int LEDblau = 3; // Farbe blau an Pin 3
int LEDrot = 5; // Farbe rot an Pin 5
int LEDgruen=6; // Farbe gruen an Pin 6
int p=1000; // p ist eine Pause mit 1000ms also 1 Sekunde
int brightness1a = 150; // Zahlenwert zwischen 0 und 255 – gibt //die Leuchtstärke der einzelnen Farbe an
int brightness1b = 150; // Zahlenwert zwischen 0 und 255 – gibt //die Leuchtstärke der einzelnen Farbe an
int brightness1c = 150; // Zahlenwert zwischen 0 und 255 – gibt //die Leuchtstärke der einzelnen Farbe an
int dunkel = 0; // Zahlenwert 0 bedeutet Spannung 0V – also LED
//aus
void setup()
{
    pinMode(LEDblau, OUTPUT);
    pinMode(LEDgruen, OUTPUT);
    pinMode(LEDrot, OUTPUT); 
}
void loop()
{
analogWrite(LEDgruen, brightness1c); // gruen und rot ein = gelb
analogWrite(LEDrot, brightness1b);
delay(p);
analogWrite(LEDgruen, dunkel); // gruen und rot aus = gelb aus
analogWrite(LEDrot, dunkel);
analogWrite(LEDgruen, brightness1c); // gruen und blau ein =
//türkis
analogWrite(LEDblau, brightness1b);
delay(p);
analogWrite(LEDgruen, dunkel); // gruen und blau aus = türkis aus
analogWrite(LEDblau, dunkel);
analogWrite(LEDrot, brightness1b); // rot und blau ein = lila
analogWrite(LEDblau, brightness1b);
delay(p);
analogWrite(LEDrot, dunkel); // rot und blau aus = lila aus
analogWrite(LEDblau, dunkel);
}*/

