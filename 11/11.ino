/*Desenvolva um programa, usando funções digitais, para
acionar as respectivas cores no LED RGB se:
- Aciona o vermelho, quando o botão do pino 2 for acionado;
- Aciona o azul, quando o botão do pino 3 for acionado;
- Aciona o verde, quando o botão do pino 4 for acionado;
Obs.: a cor acionada pode permanecer ligada enquanto o
respectivo botão não voltar para a posição inicial,
proporcionando assim uma mistura entre as cores.*/
void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(6,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  if(digitalRead(2)==HIGH){
    digitalWrite(6,HIGH);
  }
  else{
    digitalWrite(6,LOW);
  }
  if(digitalRead(3)==HIGH){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }
  if(digitalRead(4)==HIGH){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
