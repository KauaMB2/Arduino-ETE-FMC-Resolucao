/*Faça um programa, usando encadeamento, que acione o
buzzer do pino 11:
- com a frequência de 200 Hz, caso o botão do pino 2 for
acionado;
- com a frequência de 400 Hz, caso o botão do pino 3 for
acionado;
- com a frequência de 600 Hz, caso o botão do pino 4 for
acionado;
- Pare a geração de som, caso nenhum botão estiver
acionado;*/
#define buzzer 11
void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(buzzer,OUTPUT);
}
void loop(){
  if(digitalRead(2)){
    tone(buzzer,200);
  }
  else if(digitalRead(3)){
    tone(buzzer,400);
  }
  else if(digitalRead(4)){
    tone(buzzer,600);
  }
  else{
  	noTone(buzzer);
  }
}
