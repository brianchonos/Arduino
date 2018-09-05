int counter=1;
void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  for(int i=0;i<8;i++)
  {
    counter++;
    if(counter==1)
    {
      digitalWrite(3,HIGH);
      delay(5000);
      digitalWrite(3,LOW);
      delay(5000);
    }
    else if(counter==2)
    {
      digitalWrite(3,HIGH);
      delay(2500);
      digitalWrite(3,LOW);
      delay(2500);
    }
    else if(counter==3)
    {
      digitalWrite(3,HIGH);
      delay(1250);
      digitalWrite(3,LOW);
      delay(1250);
    }
    else if(counter==4)
    {
      digitalWrite(3,HIGH);
      delay(700);
      digitalWrite(3,LOW);
      delay(700);
    }
    else if(counter==5)
    {
      digitalWrite(3,HIGH);
      delay(350);
      digitalWrite(3,LOW);
      delay(350);
    }
    else if(counter==6)
    {
      digitalWrite(3,HIGH);
      delay(125);
      digitalWrite(3,LOW);
      delay(125);
    }
     else if(counter==7)
    {
      digitalWrite(3,HIGH);
      delay(50);
      digitalWrite(3,LOW);
      delay(50);
    }
    else
    {
      counter=0;
    }
   
  }
    

}
