#include<Servo.h>

long randtime = 0;
long randLED = 0;

int pos1 = 3; //1
int pos2 = 3; //9
int pos3 = 6; //10
int pos4 = 5; //11
int pos5 = 0; //5
int pos6 = 2; //6
int pos7 = 0; //14
int pos8 = 0; //13
int pos9 = 3; //12
int pos10 = 0; //2

int u_a1 = 3; //1
int u_v1 = 90; //1
int u_a2 = 3; //9
int u_v2 = 93; //9
int u_a3 = 6; //10
int u_v3 = 87; //10
int u_a4 = 5; //11
int u_v4 = 95; //11
int u_a5 = 0; //5
int u_v5 = 87; //5
int u_a6 = 2; //6
int u_v6 = 92; //6
int u_a7 = 0; //14
int u_v7 = 86; //14
int u_a8 = 0; //13
int u_v8 = 88; //13
int u_a9 = 3; //12
int u_v9 = 80; //12
int u_a10 = 0; //2
int u_v10 = 88; //2

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


  pinMode(23, OUTPUT); //1
  pinMode(24, OUTPUT); //9
  pinMode(25, OUTPUT); //10
  pinMode(26, OUTPUT); //11
  pinMode(27, OUTPUT); //5
  pinMode(28, OUTPUT); //6
  pinMode(29, OUTPUT); //14
  pinMode(30, OUTPUT); //13
  pinMode(31, OUTPUT); //12
  pinMode(32, OUTPUT); //2
  pinMode(33, OUTPUT); //1
  pinMode(34, OUTPUT); //9
  pinMode(35, OUTPUT); //10
  pinMode(36, OUTPUT); //11
  pinMode(37, OUTPUT); //5
  pinMode(38, OUTPUT); //6
  pinMode(39, OUTPUT); //14
  pinMode(40, OUTPUT); //13
  pinMode(41, OUTPUT); //12
  pinMode(42, OUTPUT); //2

  pinMode(13, OUTPUT); //LED

  pinMode(0, INPUT); //open
  pinMode(1, INPUT); //close
  pinMode(2, INPUT); //mygtuks
  pinMode(14, OUTPUT); //signalas i 2 arduino

  randomSeed (analogRead (0));    // randomize

  servo1.attach(3); //1 uztv
  servo2.attach(4); //9 uztv
  servo3.attach(5); //10 uztv
  servo4.attach(6); //11 uztv
  servo5.attach(7); //5 uztv
  servo6.attach(8); //6 uztv
  servo7.attach(9); //14 uztv
  servo8.attach(10); //13 uztv
  servo9.attach(11); //12 uztv
  servo10.attach(12); //2 uztv

  digitalWrite(14, LOW);

  digitalWrite(23, HIGH);
  digitalWrite(33, LOW); //1

  digitalWrite(24, HIGH);
  digitalWrite(34, LOW); //2

  digitalWrite(25, HIGH);
  digitalWrite(35, LOW); //3

  digitalWrite(26, HIGH);
  digitalWrite(36, LOW); //4

  digitalWrite(27, HIGH);
  digitalWrite(37, LOW); //5

  digitalWrite(28, HIGH);
  digitalWrite(38, LOW); //6

  digitalWrite(29, HIGH);
  digitalWrite(39, LOW); //7

  digitalWrite(30, HIGH);
  digitalWrite(40, LOW); //8

  digitalWrite(31, HIGH);
  digitalWrite(41, LOW); //9

  digitalWrite(32, HIGH);
  digitalWrite(42, LOW); //10

  for (int pos1=u_a1; pos1 <= u_v1; pos1++){
    servo1.write(pos1);
    delay(1);}
  for (int pos1=u_v1; pos1 >= u_a1; pos1--){
    servo1.write(pos1);
    delay(1);}

  for (int pos2=u_a2; pos2 <= u_v2; pos2++){
    servo2.write(pos2);
    delay(1);}
  for (int pos2=u_v2; pos2 >= u_a2; pos2--){
    servo2.write(pos2);
    delay(1);}

  for (int pos3=u_a3; pos3 <= u_v3; pos3++){
    servo3.write(pos3);
    delay(1);}
  for (int pos3=u_v3; pos3 >= u_a3; pos3--){
    servo3.write(pos3);
    delay(1);}

  for (int pos4=u_a4; pos4 <= u_v4; pos4++){
    servo4.write(pos4);
    delay(1);}
  for (int pos4=u_v4; pos4 >= u_a4; pos4--){
    servo4.write(pos4);
    delay(1);}

  for (int pos5=u_a5; pos5 <= u_v5; pos5++){
    servo5.write(pos5);
    delay(1);}
  for (int pos5=u_v5; pos5 >= u_a5; pos5--){
    servo5.write(pos5);
    delay(1);}

  for (int pos6=u_a6; pos6 <= u_v6; pos6++){
    servo6.write(pos6);
    delay(1);}
  for (int pos6=u_v6; pos6 >= u_a6; pos6--){
    servo6.write(pos6);
    delay(1);}

  for (int pos7=u_a7; pos7 <= u_v7; pos7++){
    servo7.write(pos7);
    delay(1);}
  for (int pos7=u_v7; pos7 >= u_a7; pos7--){
    servo7.write(pos7);
    delay(1);}

  for (int pos8=u_a8; pos8 <= u_v8; pos8++){
    servo8.write(pos8);
    delay(1);}
  for (int pos8=u_v8; pos8 >= u_a8; pos8--){
    servo8.write(pos8);
    delay(1);}

  for (int pos9=u_a9; pos9 <= u_v9; pos9++){
    servo9.write(pos9);
    delay(1);}
  for (int pos9=u_v9; pos9 >= u_a9; pos9--){
    servo9.write(pos9);
    delay(1);}

  for (int pos10=u_a10; pos10 <= u_v10; pos10++){
    servo10.write(pos10);
    delay(1);}
  for (int pos10=u_v10; pos10 >= u_a10; pos10--){
    servo10.write(pos10);
    delay(1);}




   digitalWrite(13, LOW);



}
void loop() {

ciklas:

  if (digitalRead(0) == HIGH){
    servo1.write(u_v1);
    servo2.write(u_v2);
    servo3.write(u_v3);
    servo4.write(u_v4);
    servo5.write(u_v5);
    servo6.write(u_v6);
    servo7.write(u_v7);
    servo8.write(u_v8);
    servo9.write(u_v9);
    servo10.write(u_v10);}

  if (digitalRead(1) == HIGH){
    servo1.write(u_a1);
    servo2.write(u_a2);
    servo3.write(u_a3);
    servo4.write(u_a4);
    servo5.write(u_a5);
    servo6.write(u_a6);
    servo7.write(u_a7);
    servo8.write(u_a8);
    servo9.write(u_a9);
    servo10.write(u_a10);}

  if (digitalRead(2) == HIGH){
      digitalWrite(13, HIGH);
      digitalWrite(14, HIGH);
       goto sequence;  }

//ZALIA
  randtime = random (1000, 3000);
  randLED = random (23, 33);
  delay(randtime);

  if (digitalRead(2) == HIGH){
      digitalWrite(13, HIGH);
      digitalWrite(14, HIGH);
    goto sequence;  }

  digitalWrite(randLED, LOW);
  digitalWrite(randLED+10, HIGH);


//RAUDONA
  delay(randtime);
  randtime = random (1000, 3000);
  randLED = random (23, 33);
  digitalWrite(randLED, HIGH);
  digitalWrite(randLED+10, LOW);

goto ciklas;

sequence:




  digitalWrite(23, HIGH);
  digitalWrite(33, LOW);

  digitalWrite(24, HIGH);
  digitalWrite(34, LOW);

  digitalWrite(25, HIGH);
  digitalWrite(35, LOW);

  digitalWrite(26, HIGH);
  digitalWrite(36, LOW);

  digitalWrite(27, HIGH);
  digitalWrite(37, LOW);

  digitalWrite(28, HIGH);
  digitalWrite(38, LOW);

  digitalWrite(29, HIGH);
  digitalWrite(39, LOW);

  digitalWrite(30, HIGH);
  digitalWrite(40, LOW);

  digitalWrite(31, HIGH);
  digitalWrite(41, LOW);

  digitalWrite(32, HIGH);
  digitalWrite(42, LOW);

      randtime = random (1000, 3000);
  delay(randtime);
  for (int pos1=u_a1; pos1 <= u_v1; pos1++){
    servo1.write(pos1);                         //open
    delay(7);}
  delay(550);
  digitalWrite(23, LOW);
  digitalWrite(33, HIGH);                       //1 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(23, HIGH);
  digitalWrite(33, LOW);                        //1 raudona
  delay(550);
  for (int pos1=u_v1; pos1 >= u_a1; pos1--){
    servo1.write(pos1);                         //close
    delay(7);}
  delay(randtime);

      digitalWrite(14, LOW);

  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos2=u_a2; pos2 <= u_v2; pos2++){
    servo2.write(pos2);                         //open
    delay(7);}
  delay(550);
  digitalWrite(24, LOW);
  digitalWrite(34, HIGH);                       //2 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(24, HIGH);
  digitalWrite(34, LOW);                        //2 raudona
  delay(550);
  for (int pos2=u_v2; pos2 >= u_a2; pos2--){
    servo2.write(pos2);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos3=u_a3; pos3 <= u_v3; pos3++){
    servo3.write(pos3);                         //open
    delay(7);}
  delay(550);
  digitalWrite(25, LOW);
  digitalWrite(35, HIGH);                       //3 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(25, HIGH);
  digitalWrite(35, LOW);                        //3 raudona
  delay(550);
  for (int pos3=u_v3; pos3 >= u_a3; pos3--){
    servo3.write(pos3);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos4=u_a4; pos4 <= u_v4; pos4++){
    servo4.write(pos4);                         //open
    delay(7);}
  delay(550);
  digitalWrite(26, LOW);
  digitalWrite(36, HIGH);                       //4 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(26, HIGH);
  digitalWrite(36, LOW);                        //4 raudona
  delay(550);
  for (int pos4=u_v4; pos4 >= u_a4; pos4--){
    servo4.write(pos4);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos5=u_a5; pos5 <= u_v5; pos5++){
    servo5.write(pos5);                         //open
    delay(7);}
  delay(550);
  digitalWrite(27, LOW);
  digitalWrite(37, HIGH);                       //5 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(27, HIGH);
  digitalWrite(37, LOW);                        //5 raudona
  delay(550);
  for (int pos5=u_v5; pos5 >= u_a5; pos5--){
    servo5.write(pos5);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos6=u_a6; pos6 <= u_v6; pos6++){
    servo6.write(pos6);                         //open
    delay(7);}
  delay(550);
  digitalWrite(28, LOW);
  digitalWrite(38, HIGH);                       //6 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(28, HIGH);
  digitalWrite(38, LOW);                        //6 raudona
  delay(550);
  for (int pos6=u_v6; pos6 >= u_a6; pos6--){
    servo6.write(pos6);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos7=u_a7; pos7 <= u_v7; pos7++){
    servo7.write(pos7);                         //open
    delay(7);}
  delay(550);
  digitalWrite(29, LOW);
  digitalWrite(39, HIGH);                       //7 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(29, HIGH);
  digitalWrite(39, LOW);                        //7 raudona
  delay(550);
  for (int pos7=u_v7; pos7 >= u_a7; pos7--){
    servo7.write(pos7);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos8=u_a8; pos8 <= u_v8; pos8++){
    servo8.write(pos8);                         //open
    delay(7);}
  delay(550);
  digitalWrite(30, LOW);
  digitalWrite(40, HIGH);                       //8 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(30, HIGH);
  digitalWrite(40, LOW);                        //8 raudona
  delay(550);
  for (int pos8=u_v8; pos8 >= u_a8; pos8--){
    servo8.write(pos8);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos9=u_a9; pos9 <= u_v9; pos9++){
    servo9.write(pos9);                         //open
    delay(7);}
  delay(550);
  digitalWrite(31, LOW);
  digitalWrite(41, HIGH);                       //9 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(31, HIGH);
  digitalWrite(41, LOW);                        //9 raudona
  delay(550);
  for (int pos9=u_v9; pos9 >= u_a9; pos9--){
    servo9.write(pos9);                         //close
    delay(7);}
  delay(randtime);


  randtime = random (1000, 3000);
  delay(randtime);
  for (int pos10=u_a10; pos10 <= u_v10; pos10++){
    servo10.write(pos10);                         //open
    delay(7);}
  delay(550);
  digitalWrite(32, LOW);
  digitalWrite(42, HIGH);                       //10 zalia
  randtime = random (1000, 3000);
  delay(randtime);
  digitalWrite(32, HIGH);
  digitalWrite(42, LOW);                        //10 raudona
  delay(550);
  for (int pos10=u_v10; pos10 >= u_a10; pos10--){
    servo10.write(pos10);                         //close
    delay(7);}
  delay(randtime);


    digitalWrite(13, LOW);


  }
