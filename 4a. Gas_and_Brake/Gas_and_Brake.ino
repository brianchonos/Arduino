int counter=1000;
int counter2=0;
void setup() {
  pinMode(2,INPUT);
  digitalWrite(2,HIGH); //Turns on the pull up resistor
  pinMode(4,INPUT);
  digitalWrite(4,HIGH);
  pinMode(9,OUTPUT);
}

void loop() {
  if(digitalRead(2)==LOW)
  {
    for(int i=0;i<20;i++)
  {
   counter=counter-50;
   digitalWrite(9,HIGH);
   delay(counter);
   digitalWrite(9,LOW);
   delay(counter);
   if (counter==0)
   {
    counter=1000;
   }
  }
  }
  else if(digitalRead(4)==LOW)
  {
    for(int i=0;i<20;i++)
  {
   counter2=counter2+50;
   digitalWrite(9,HIGH);
   delay(counter2);
   digitalWrite(9,LOW);
   delay(counter2);
   if (counter2==1000)
   {
    counter2=0;
   }
  }
  }
  else
  {
    digitalWrite(9,LOW);
  }
}
