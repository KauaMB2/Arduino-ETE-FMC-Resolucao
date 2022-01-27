/*Usando condicional composta, desenvolva um programa onde:
- Se os botões dos pinos 2 ou 3 forem acionado, todos os LED’s se
acendem juntos;
- Se os botões dos pinos 4 e 5 forem acionados, os LEDs 7 e 8 se
acendem juntos.*/
void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}
void loop(){
  if((digitalRead(2)==LOW)||(digitalRead(3)==LOW)){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }
  else if((digitalRead(4)==LOW)&&(digitalRead(5)==LOW)){
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  else{
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
}
