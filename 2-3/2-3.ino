/*Acender e apagar os LED’s conectados aos pinos 7, 8, 9 e
10, de modo que os LED’s se comportem como um piscapisca.

OBS.: Os LED’s dos pinos 7 e 8 devem acender juntos por
1,5 segundos e apagarem juntos, depois os LED’s dos pinos
9 e 10 devem acender juntos por 2 segundos e apagarem
juntos.*/
#define Led7 7
#define Led8 8
#define Led9 9
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
  digitalWrite(Led9,false);
  digitalWrite(Led10,false);
  delay(1500);
  digitalWrite(Led7,false);
  digitalWrite(Led8,false);
  digitalWrite(Led9,true);
  digitalWrite(Led10,true);
  delay(2000);
}
