#define pot A0
void setup(){
  Serial.begin(9600);
  pinMode(pot,INPUT);
}
void loop(){
  int leitura=analogRead(pot);
  Serial.println(leitura);
}