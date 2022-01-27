/*Programar o Arduino para acender os LED’s conectados aos
pinos 7 e 8.*/
#define Led7 7
#define Led8 8
void setup(){
  pinMode(Led7,OUTPUT);
  pinMode(Led8,OUTPUT);
}
void loop(){
  digitalWrite(Led7,true);
  digitalWrite(Led8,true);
}
