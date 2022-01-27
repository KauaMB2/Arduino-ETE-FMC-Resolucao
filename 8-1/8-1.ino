/*Desenvolva um programa onde:
- Se o botão do pino 4 estiver acionado, e a leitura do LDR for
menor que 989, os LEDs dos pinos 9 e 10 acendem. Do
contrário, todos os LEDs permanecem apagados.
Visualize os valores se alterando no Serial Monitor.*/
#define LDR A1
#define botao4 4
#define led9 9
#define led10 10
void setup(){
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(botao4,INPUT);
  pinMode(LDR,INPUT);
}
void loop(){
  bool leituraBotao=digitalRead(botao4);
  int leituraLDR=analogRead(LDR);
  if((leituraBotao==true)&&(leituraLDR<989)){
    digitalWrite(9,true);
    digitalWrite(10,true);
  }
  else{
  	digitalWrite(9,false);
    digitalWrite(10,false);
  }
}
