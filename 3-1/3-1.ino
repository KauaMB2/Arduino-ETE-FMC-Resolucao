/*Acender e apagar os LED’s conectados aos pinos 7, 8, 9 e
10, de modo que os LED’s se comportem como um piscapisca.
OBS.: Cada LED deve acender e apagar individualmente,
sendo o 1º a piscar o LED do pino 7, depois o do pino 8, e
assim sucessivamente, com intervalo de 0,5 segundos.*/
void setup(){
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop(){
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(500);
}
