/*Usando condicional composta, desenvolva um programa onde:
- Se acionar o botão do pino 2, os LEDs dos pinos 7 e 8 piscam
por 1,5 segundo e se apagam por 3 segundos;
- Se acionar o botão do pino 3, os LED’s dos pinos 9 e 10 piscam
por 2 segundos e se apagam por 1 segundo;
- Se acionar o botão do pino 4, os LED’s dos pinos 7, 8, 9 e 10 se
ascendem juntos, e assim permanecem.*/
void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop(){
  if(digitalRead(2)==LOW){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(1500);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    delay(1500);
  }
  else{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
  }
  if(digitalRead(3)==LOW){
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    delay(1500);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(1500);
  }
  else{
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  if(digitalRead(4)==LOW){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
  else{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
}
