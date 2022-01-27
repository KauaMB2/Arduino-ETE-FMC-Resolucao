/*Desenvolva um programa onde:
Utilize os valores da variação de tensão do trimpot (pino A0), para
acionar a frequência correspondente no buzzer (pino 11).
Mostre os valores de leitura do trimpot no Serial Monitor.
Lembrando que: se o valor da tensão do trimpot for igual a 0, o
buzzer deve parar de emitir som.*/
#define pot A0
#define buzzer 11
void setup(){
  pinMode(pot,INPUT);
  pinMode(buzzer,OUTPUT);
}
void loop(){
  int intensidade=(analogRead(pot))*19;
  if(intensidade==0){
    noTone(buzzer);
  }
  else{
    tone(buzzer,intensidade);
  }
}
