#define Led7 7
#define Led8 8
#define Led9 9
/*Programar o Arduino para acender e apagar os LED’s
conectados aos pinos 7, 8, 9 e 10, de modo que os LED’s se
comportem como um pisca-pisca.

OBS.: Os LED’s devem ascenderem todos juntos e apagarem
junto, com intervalos de 2 segundo.*/
#define Led10 10
void setup(){
  pinMode(Led7,OUTPUT);
  pinMode(Led8,OUTPUT);
  pinMode(Led9,OUTPUT);
  pinMode(Led10,OUTPUT);
}
void loop(){
  digitalWrite(Led7,true);
  digitalWrite(Led8,true);
  digitalWrite(Led9,true);
  digitalWrite(Led10,true);
  delay(2000);
  digitalWrite(Led7,false);
  digitalWrite(Led8,false);
  digitalWrite(Led9,false);
  digitalWrite(Led10,false);
  delay(2000);
}
