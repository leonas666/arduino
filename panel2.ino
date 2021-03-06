#include <avr/pgmspace.h>
#include <avr/wdt.h>

const byte D051x1u[] PROGMEM =  {0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x34, 0x32, 0x38, 0x42, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x41, 0x30, 0x32, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x33, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x41, 0x0D, 0x0A};
const byte D051x1l[] PROGMEM =  {0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x34, 0x31, 0x38, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x41, 0x30, 0x32, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x33, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x41, 0x0D, 0x0A};
const byte D051x2u[] PROGMEM =  {0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x34, 0x36, 0x38, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x41, 0x30, 0x32, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x33, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x41, 0x0D, 0x0A};
const byte D051x2l[] PROGMEM =  {0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x34, 0x35, 0x38, 0x38, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x33, 0x30, 0x30, 0x41, 0x30, 0x32, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x33, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x41, 0x0D, 0x0A};

int S;
int k;
int u;
unsigned int D;


void setup() {
  pinMode(13, OUTPUT);    //LED indikatorius
  pinMode(2, INPUT);      //evakuacija start
  pinMode(12, OUTPUT);     //LED indikatorius raud
  Serial.begin(9600);
  wdt_enable(WDTO_8S);
}
void loop() {
  S = 0;
  delay(700);
  digitalWrite(13, HIGH);
  delay(700);
  digitalWrite(13, LOW);
  wdt_reset();
  if (digitalRead(2) == HIGH)                                                               // jei 2 high - atrakinam
  {
    digitalWrite(12, HIGH);
    delay(1500);
    if (S < 1) {
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D051x1l + k);            // 51.1 duru uzrakinimas
        Serial.write(D);                           //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D051x2l + k);            // 51.2 duru uzrakinimas
        Serial.write(D);                           //
      }
      delay(40);
      digitalWrite(12, LOW);
      wdt_reset();
      S = S++;
    }
atrakinam:
    delay(700);
    digitalWrite(12, HIGH);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D051x1u + k);            // 51.1 duru atrakinimas
      Serial.write(D);                           //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D051x2u + k);            // 51.2 duru atrakinimas
      Serial.write(D);                           //
    }
    delay(40);
    wdt_reset();


uzrakinam:
    if (digitalRead(2) == LOW)                                                  // jei 2 low - uzrakinam


      for (u = 0; u < 6; u++) {
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D051x1l + k);            // 51.1 duru uzrakinimas
          Serial.write(D);                           //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D051x2l + k);            // 51.2 duru uzrakinimas
          Serial.write(D);                           //
        }
        delay(200);
        wdt_reset();
        u = u++;
      }
    if (digitalRead(2) == HIGH)
    {
      goto atrakinam;
    }

    digitalWrite(12, LOW);
  }
}
