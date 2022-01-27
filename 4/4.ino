/*Programar o Arduino para as seguintes ações:
- Fazer o LED do pino 7 piscar, por 1 segundo, continuamente,
todas as vezes que o botão do pino 2 for acionado;
- Fazer o LED do pino 8 piscar, por 1,5 segundos, continuamente,
todas as vezes que o botão do pino 3 for acionado;
- Fazer o LED do pino 9 piscar, por 0,5 segundos, continuamente,
todas as vezes que o botão do pino 4 for acionado;
- Fazer o LED do pino 10 piscar, por 3 segundos, continuamente,
todas as vezes que o botão do pino 5 for acionado.*/
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
  if(analogRead(2)==LOW){
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
    delay(1000);
  }
  else{
  	digitalWrite(7,LOW);
  }
  if(analogRead(3)==LOW){
    digitalWrite(8,HIGH);
    delay(1500);
    digitalWrite(8,LOW);
    delay(1500);
  }
  else{
  	digitalWrite(8,LOW);
  }
  if(analogRead(4)==LOW){
    digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);
  }
  else{
  	digitalWrite(9,LOW);
  }
  if(analogRead(5)==LOW){
    digitalWrite(10,HIGH);
    delay(3000);
    digitalWrite(10,LOW);
    delay(3000);
  }
  else{
  	digitalWrite(10,LOW);
  }
}
