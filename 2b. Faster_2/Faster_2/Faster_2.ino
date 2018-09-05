int counter=1000;
void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  for(int i=0;i<20;i++)
  {
   counter=counter-50;
   digitalWrite(3,HIGH);
   delay(counter);
   digitalWrite(3,LOW);
   delay(counter);
   if (counter==0)
   {
    counter=1000;
   }
  }
}
