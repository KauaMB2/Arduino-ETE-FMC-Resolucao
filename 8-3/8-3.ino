/*Faça um programa que controle a intensidade do LED do pino
10, de acordo com a variação de tensão do trimpot.
Quanto maior o valor da tensão no trimpot, mais brilhante o
LED fica.
Visualize os valores se alterando no Serial Monitor.*/
#define led10 10
#define pot A0
int intensidade=0;
void setup(){
  Serial.begin(9600);
  pinMode(led10,OUTPUT); 
  pinMode(pot,INPUT);
}
void loop(){
  intensidade=(analogRead(pot))/4;
  analogWrite(led10,intensidade);
  Serial.println(intensidade);
}
