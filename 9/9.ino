/*Desenvolva um programa que:
Acione o buzzer do pino 11 com a frequência de 200 Hz, caso
o botão do pino 2 for pressionado.
Do contrário, não emita som algum.*/
void setup(){
  pinMode(2,INPUT); 
  pinMode(11,OUTPUT);
}
void loop(){
  if(digitalRead(2)){
    tone(11,200);
  }
  else{
    noTone(11);
  }
}
