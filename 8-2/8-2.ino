/*Vamos desenvolver um programa para fazer o fading in do
LED do pino 9.*/
#define led9 9
int intensidade = 0;
void setup() {
	pinMode(led9,OUTPUT); 
}
void loop() {
  for(int i=0;i<255;i++){
  	analogWrite(led9,i);
  }
  delay(1000);
  analogWrite(led9,0);
  delay(1000);
}
