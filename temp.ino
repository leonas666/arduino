#include<Servo.h>

int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
int pos5 = 0;
int pos6 = 0;
int pos7 = 0;
int pos8 = 0;
int pos9 = 0;
int pos10 = 0;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;

void setup() {

  pinMode(22, INPUT);
  pinMode(23, INPUT);
  pinMode(24, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(28, INPUT);
  pinMode(29, INPUT);
  pinMode(30, INPUT);
  pinMode(31, INPUT);
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  pinMode(36, INPUT);
  pinMode(37, INPUT);
  pinMode(38, INPUT);
  pinMode(39, INPUT);
  pinMode(40, INPUT);
  pinMode(41, INPUT);

  pinMode(42, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);

  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(7);
  servo6.attach(8);
  servo7.attach(9);
  servo8.attach(10);
  servo9.attach(11);
  servo10.attach(12);

  for (int pos1=0; pos1 <= 90; pos1++){
    servo1.write(pos1);
    delay(1);}
  for (int pos1=90; pos1 >= 0; pos1--){
    servo1.write(pos1);
    delay(1);}

  for (int pos2=0; pos2 <= 90; pos2++){
    servo2.write(pos2);
    delay(1);}
  for (int pos2=90; pos2 >= 0; pos2--){
    servo2.write(pos2);
    delay(1);}

  for (int pos3=0; pos3 <= 90; pos3++){
    servo3.write(pos3);
    delay(1);}
  for (int pos3=90; pos3 >= 0; pos3--){
    servo3.write(pos3);
    delay(1);}

  for (int pos4=0; pos4 <= 90; pos4++){
    servo4.write(pos4);
    delay(1);}
  for (int pos4=90; pos4 >= 0; pos4--){
    servo4.write(pos4);
    delay(1);}

  for (int pos5=0; pos5 <= 90; pos5++){
    servo5.write(pos5);
    delay(1);}
  for (int pos5=90; pos5 >= 0; pos5--){
    servo5.write(pos5);
    delay(1);}

  for (int pos6=0; pos6 <= 90; pos6++){
    servo6.write(pos6);
    delay(1);}
  for (int pos6=90; pos6 >= 0; pos6--){
    servo6.write(pos6);
    delay(1);}

  for (int pos7=0; pos7 <= 90; pos7++){
    servo7.write(pos7);
    delay(1);}
  for (int pos7=90; pos7 >= 0; pos7--){
    servo7.write(pos7);
    delay(1);}

  for (int pos8=90; pos8 <= 180; pos8++){
    servo8.write(pos8);
    delay(1);}
  for (int pos8=180; pos8 >= 90; pos8--){
    servo8.write(pos8);
    delay(1);}

  for (int pos9=0; pos9 <= 90; pos9++){
    servo9.write(pos9);
    delay(1);}
  for (int pos9=90; pos9 >= 0; pos9--){
    servo9.write(pos9);
    delay(1);}

  for (int pos10=0; pos10 <= 90; pos10++){
    servo10.write(pos10);
    delay(1);}
  for (int pos10=90; pos10 >= 0; pos10--){
    servo10.write(pos10);
    delay(1);}

    digitalWrite(42, HIGH);
    digitalWrite(43, HIGH);
    digitalWrite(44, HIGH);
    digitalWrite(45, HIGH);
    digitalWrite(46, HIGH);
    digitalWrite(47, HIGH);
    digitalWrite(48, HIGH);
    digitalWrite(49, HIGH);
    digitalWrite(50, HIGH);
    digitalWrite(51, HIGH);


}
void loop() {

  if (digitalRead(23) == LOW && pos1 < 90) {
    pos1++;
    servo1.write(pos1);
    delay(7);
    digitalWrite(42, LOW);}
  if (digitalRead(22) == LOW && pos1 > 0) {
    pos1--;
    servo1.write(pos1);
    delay(7);
    digitalWrite(42, HIGH);}


  if (digitalRead(25) == LOW && pos2 < 90) {
    pos2++;
    servo2.write(pos2);
    delay(7);
    digitalWrite(43, LOW);}
  if (digitalRead(24) == LOW && pos2 > 0) {
    pos2--;
    servo2.write(pos2);
    delay(7);
    digitalWrite(43, HIGH);}


  if (digitalRead(27) == LOW && pos3 < 90) {
    pos3++;
    servo3.write(pos3);
    delay(7);
    digitalWrite(44, LOW);}
  if (digitalRead(26) == LOW && pos3 > 0) {
    pos3--;
    servo3.write(pos3);
    delay(7);
    digitalWrite(44, HIGH);}


  if (digitalRead(29) == LOW && pos4 < 90) {
    pos4++;
    servo4.write(pos4);
    delay(7);
    digitalWrite(45, LOW);}
  if (digitalRead(28) == LOW && pos4 > 0) {
    pos4--;
    servo4.write(pos4);
    delay(7);
    digitalWrite(45, HIGH);}


  if (digitalRead(31) == LOW && pos5 < 90) {
    pos5++;
    servo5.write(pos5);
    delay(7);
    digitalWrite(46, LOW);}
  if (digitalRead(30) == LOW && pos5 > 0) {
    pos5--;
    servo5.write(pos5);
    delay(7);
    digitalWrite(46, HIGH);}


  if (digitalRead(33) == LOW && pos6 < 90) {
    pos6++;
    servo6.write(pos6);
    delay(7);
    digitalWrite(47, LOW);}
  if (digitalRead(32) == LOW && pos6 > 0) {
    pos6--;
    servo6.write(pos6);
    delay(7);
    digitalWrite(47, HIGH);}


  if (digitalRead(35) == LOW && pos7 < 90) {
    pos7++;
    servo7.write(pos7);
    delay(7);
    digitalWrite(48, LOW);}
  if (digitalRead(34) == LOW && pos7 > 0) {
    pos7--;
    servo7.write(pos7);
    delay(7);
    digitalWrite(48, HIGH);}


  if (digitalRead(37) == LOW && pos8 < 180) {
    pos8++;
    servo8.write(pos8);
    delay(7);
    digitalWrite(49, LOW);}
  if (digitalRead(36) == LOW && pos8 > 90) {
    pos8--;
    servo8.write(pos8);
    delay(7);
    digitalWrite(49, HIGH);}


  if (digitalRead(39) == LOW && pos9 < 90) {
    pos9++;
    servo9.write(pos9);
    delay(7);
    digitalWrite(50, LOW);}
  if (digitalRead(38) == LOW && pos9 > 0) {
    pos9--;
    servo9.write(pos9);
    delay(7);
    digitalWrite(50, HIGH);}


  if (digitalRead(41) == LOW && pos10 < 90) {
    pos10++;
    servo10.write(pos10);
    delay(7);
    digitalWrite(51, LOW);}
  if (digitalRead(40) == LOW && pos10 > 0) {
    pos10--;
    servo10.write(pos10);
    delay(7);
    digitalWrite(51, HIGH);}
  }
