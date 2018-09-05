void setup() {
  pinMode(5,OUTPUT);

}

void loop() {
  for(int i=0;i<5;i++)
  {
    digitalWrite(5,HIGH);
    delay(1000);
    digitalWrite(5,LOW);
    delay(1000);
  }
  for(int h=0;h<5;h++)
  {
    digitalWrite(5,HIGH);
    delay(500);
    digitalWrite(5,LOW);
    delay(500);
  }

}
