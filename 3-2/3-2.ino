/*Programar o Arduino para acender o LED do pino 7 enquanto
o botão conectado ao pino 2 estiver acionado.*/
#define Led7 7
#define Botao2 2
void setup(){
  pinMode(Led7,OUTPUT);
  pinMode(Botao2,INPUT);
}
void loop(){
  bool readBotao2=digitalRead(Botao2);
  if(readBotao2==true){
    digitalWrite(Led7,true);
  }
  else{
    digitalWrite(Led7,false);
  }
}
