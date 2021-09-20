int buzzer=8;
int b1=2;
int b2=3;
int b3=4;
int b4=5;
int C=262; //do
int D=294; //re
int E=330; //mi
int F=349; //fa
void loop() {
bd1=digitalRead(b1);
 bd2=digitalRead(b2);
 bd3=digitalRead(b3);
 bd4=digitalRead(b4);
 if(bd1==HIGH)
 { tone(buzzer,C);
 delay(1000);
 noTone(buzzer); }
 if(bd4==HIGH)
 {
 tone(buzzer,F);
 delay(1000);
 noTone(buzzer);
 }
 noTone(buzzer);
 }
int bd1=0,bd2=0,bd3=0,bd4=0;
void setup() {
pinMode(b1,INPUT);
pinMode(b2,INPUT);
pinMode(b3,INPUT);
pinMode(b4,INPUT);
pinMode(buzzer,OUTPUT); }
 if(bd2==HIGH)
 { tone(buzzer,D);
 delay(1000);
 noTone(buzzer); }
if(bd3==HIGH)
 { tone(buzzer,E);
 delay(1000);
 noTone(buzzer); }