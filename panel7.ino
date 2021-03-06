#include <avr/pgmspace.h>
#include <avr/wdt.h>

const byte D025x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x39, 0x30, 0x30, 0x34, 0x32, 0x41, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x39, 0x30, 0x30, 0x41, 0x30, 0x34, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x31, 0x39, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x35, 0x34, 0x0D, 0x0A};
const byte D025x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x39, 0x30, 0x30, 0x34, 0x31, 0x41, 0x36, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x39, 0x30, 0x30, 0x41, 0x30, 0x34, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x31, 0x39, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x35, 0x34, 0x0D, 0x0A};
const byte D027x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x34, 0x32, 0x41, 0x33, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x41, 0x30, 0x34, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x31, 0x42, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x35, 0x32, 0x0D, 0x0A};
const byte D027x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x34, 0x31, 0x41, 0x34, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x41, 0x30, 0x34, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x31, 0x42, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x35, 0x32, 0x0D, 0x0A};
const byte D027x2u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x34, 0x36, 0x39, 0x46, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x41, 0x30, 0x34, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x31, 0x42, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x35, 0x32, 0x0D, 0x0A};
const byte D027x2l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x34, 0x35, 0x41, 0x30, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x42, 0x30, 0x30, 0x41, 0x30, 0x34, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x31, 0x42, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x35, 0x32, 0x0D, 0x0A};
const byte D031x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x46, 0x30, 0x30, 0x34, 0x36, 0x39, 0x42, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x46, 0x30, 0x30, 0x34, 0x32, 0x39, 0x46, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x46, 0x30, 0x30, 0x41, 0x30, 0x34, 0x31, 0x0D, 0x0A};
const byte D031x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x31, 0x46, 0x30, 0x30, 0x34, 0x35, 0x39, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x46, 0x30, 0x30, 0x34, 0x31, 0x41, 0x30, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x31, 0x46, 0x30, 0x30, 0x41, 0x30, 0x34, 0x31, 0x0D, 0x0A};
const byte D034x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x32, 0x32, 0x30, 0x30, 0x34, 0x36, 0x39, 0x38, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x32, 0x32, 0x30, 0x30, 0x34, 0x32, 0x39, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x32, 0x32, 0x30, 0x30, 0x41, 0x30, 0x33, 0x45, 0x0D, 0x0A};
const byte D034x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x32, 0x32, 0x30, 0x30, 0x34, 0x35, 0x39, 0x39, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x32, 0x32, 0x30, 0x30, 0x34, 0x31, 0x39, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x32, 0x32, 0x30, 0x30, 0x41, 0x30, 0x33, 0x45, 0x0D, 0x0A};
const byte D057x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x34, 0x32, 0x38, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x41, 0x30, 0x32, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x39, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x34, 0x0D, 0x0A};
const byte D057x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x34, 0x31, 0x38, 0x36, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x41, 0x30, 0x32, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x39, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x34, 0x0D, 0x0A};
const byte D057x2u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x34, 0x36, 0x38, 0x31, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x41, 0x30, 0x32, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x39, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x34, 0x0D, 0x0A};
const byte D057x2l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x34, 0x35, 0x38, 0x32, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x39, 0x30, 0x30, 0x41, 0x30, 0x32, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x39, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x34, 0x0D, 0x0A};
const byte D061x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x34, 0x32, 0x38, 0x31, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x41, 0x30, 0x32, 0x33, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x44, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x30, 0x0D, 0x0A};
const byte D061x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x34, 0x31, 0x38, 0x32, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x41, 0x30, 0x32, 0x33, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x44, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x30, 0x0D, 0x0A};
const byte D061x2u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x34, 0x36, 0x37, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x41, 0x30, 0x32, 0x33, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x44, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x30, 0x0D, 0x0A};
const byte D061x2l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x34, 0x35, 0x37, 0x45, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x33, 0x44, 0x30, 0x30, 0x41, 0x30, 0x32, 0x33, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x33, 0x44, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x33, 0x30, 0x0D, 0x0A};
const byte D068x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x34, 0x32, 0x37, 0x41, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x41, 0x30, 0x31, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x34, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x32, 0x39, 0x0D, 0x0A};
const byte D068x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x34, 0x31, 0x37, 0x42, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x41, 0x30, 0x31, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x34, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x32, 0x39, 0x0D, 0x0A};
const byte D068x2u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x34, 0x36, 0x37, 0x36, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x41, 0x30, 0x31, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x34, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x32, 0x39, 0x0D, 0x0A};
const byte D068x2l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x34, 0x35, 0x37, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x34, 0x30, 0x30, 0x41, 0x30, 0x31, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x34, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x32, 0x39, 0x0D, 0x0A};
const byte D078x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x34, 0x32, 0x37, 0x30, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x41, 0x30, 0x31, 0x32, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x45, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x31, 0x46, 0x0D, 0x0A};
const byte D078x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x34, 0x31, 0x37, 0x31, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x41, 0x30, 0x31, 0x32, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x45, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x31, 0x46, 0x0D, 0x0A};
const byte D078x2u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x34, 0x36, 0x36, 0x43, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x41, 0x30, 0x31, 0x32, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x45, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x31, 0x46, 0x0D, 0x0A};
const byte D078x2l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x34, 0x35, 0x36, 0x44, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x34, 0x45, 0x30, 0x30, 0x41, 0x30, 0x31, 0x32, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x34, 0x34, 0x45, 0x30, 0x30, 0x43, 0x30, 0x30, 0x30, 0x30, 0x34, 0x43, 0x46, 0x46, 0x43, 0x31, 0x46, 0x0D, 0x0A};
const byte D086x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x35, 0x36, 0x30, 0x30, 0x34, 0x36, 0x36, 0x34, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x36, 0x30, 0x30, 0x34, 0x32, 0x36, 0x38, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x36, 0x30, 0x30, 0x41, 0x30, 0x30, 0x41, 0x0D, 0x0A};
const byte D086x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x35, 0x36, 0x30, 0x30, 0x34, 0x35, 0x36, 0x35, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x36, 0x30, 0x30, 0x34, 0x31, 0x36, 0x39, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x36, 0x30, 0x30, 0x41, 0x30, 0x30, 0x41, 0x0D, 0x0A};
const byte D087x1u[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x35, 0x37, 0x30, 0x30, 0x34, 0x36, 0x36, 0x33, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x37, 0x30, 0x30, 0x34, 0x32, 0x36, 0x37, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x37, 0x30, 0x30, 0x41, 0x30, 0x30, 0x39, 0x0D, 0x0A};
const byte D087x1l[] PROGMEM =  {0x00, 0x3A, 0x30, 0x30, 0x35, 0x37, 0x30, 0x30, 0x34, 0x35, 0x36, 0x34, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x37, 0x30, 0x30, 0x34, 0x31, 0x36, 0x38, 0x0D, 0x0A, 0x00, 0x3A, 0x30, 0x30, 0x35, 0x37, 0x30, 0x30, 0x41, 0x30, 0x30, 0x39, 0x0D, 0x0A};

int S;
int k;
int u;
unsigned int D;


void setup() {
  pinMode(13, OUTPUT);    //LED indikatorius zalias
  pinMode(12, OUTPUT);    //LED indikatorius raudonas
  pinMode(2, INPUT);      //evakuacija start
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
      for (k = 0; k < 50; k++) {                  //
        D = pgm_read_byte(D025x1l + k);            // 25.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D027x1l + k);            // 27.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                  //
        D = pgm_read_byte(D027x2l + k);            // 27.2 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 42; k++) {                   //
        D = pgm_read_byte(D031x1l + k);            // 31.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 42; k++) {                  //
        D = pgm_read_byte(D034x1l + k);            // 34.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D057x1l + k);            // 57.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                  //
        D = pgm_read_byte(D057x2l + k);            // 57.2 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D061x1l + k);            // 61.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                  //
        D = pgm_read_byte(D061x2l + k);            // 61.2 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D068x1l + k);            // 68.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                  //
        D = pgm_read_byte(D068x2l + k);            // 68.2 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                   //
        D = pgm_read_byte(D078x1l + k);            // 78.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 50; k++) {                  //
        D = pgm_read_byte(D078x2l + k);            // 78.2 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 42; k++) {                   //
        D = pgm_read_byte(D086x1l + k);            // 86.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      for (k = 0; k < 42; k++) {                  //
        D = pgm_read_byte(D087x1l + k);            // 87.1 duru uzrakinimas
        Serial.write(D);                          //
      }
      delay(40);
      digitalWrite(12, LOW);
      wdt_reset();
      S = S++;
    }

atrakinam:
    delay(700);
    digitalWrite(12, HIGH);
    for (k = 0; k < 50; k++) {                  //
      D = pgm_read_byte(D025x1u + k);            // 25.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D027x1u + k);            // 27.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                  //
      D = pgm_read_byte(D027x2u + k);            // 27.2 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 42; k++) {                   //
      D = pgm_read_byte(D031x1u + k);            // 31.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 42; k++) {                  //
      D = pgm_read_byte(D034x1u + k);            // 34.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D057x1u + k);            // 57.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                  //
      D = pgm_read_byte(D057x2u + k);            // 57.2 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D061x1u + k);            // 61.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                  //
      D = pgm_read_byte(D061x2u + k);            // 61.2 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D068x1u + k);            // 68.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                  //
      D = pgm_read_byte(D068x2u + k);            // 68.2 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                   //
      D = pgm_read_byte(D078x1u + k);            // 78.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 50; k++) {                  //
      D = pgm_read_byte(D078x2u + k);            // 78.2 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 42; k++) {                   //
      D = pgm_read_byte(D086x1u + k);            // 86.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    for (k = 0; k < 42; k++) {                  //
      D = pgm_read_byte(D087x1u + k);            // 87.1 duru atrakinimas
      Serial.write(D);                          //
    }
    delay(40);
    wdt_reset();
uzrakinam:
    if (digitalRead(2) == LOW)                                                  // jei 2 low - uzrakinam


      for (u = 0; u < 6; u++) {
        for (k = 0; k < 50; k++) {                  //
          D = pgm_read_byte(D025x1l + k);            // 25.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D027x1l + k);            // 27.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                  //
          D = pgm_read_byte(D027x2l + k);            // 27.2 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 42; k++) {                   //
          D = pgm_read_byte(D031x1l + k);            // 31.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 42; k++) {                  //
          D = pgm_read_byte(D034x1l + k);            // 34.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D057x1l + k);            // 57.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                  //
          D = pgm_read_byte(D057x2l + k);            // 57.2 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D061x1l + k);            // 61.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                  //
          D = pgm_read_byte(D061x2l + k);            // 61.2 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D068x1l + k);            // 68.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                  //
          D = pgm_read_byte(D068x2l + k);            // 68.2 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                   //
          D = pgm_read_byte(D078x1l + k);            // 78.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 50; k++) {                  //
          D = pgm_read_byte(D078x2l + k);            // 78.2 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 42; k++) {                   //
          D = pgm_read_byte(D086x1l + k);            // 86.1 duru uzrakinimas
          Serial.write(D);                          //
        }
        delay(40);
        for (k = 0; k < 42; k++) {                  //
          D = pgm_read_byte(D087x1l + k);            // 87.1 duru uzrakinimas
          Serial.write(D);                          //
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
