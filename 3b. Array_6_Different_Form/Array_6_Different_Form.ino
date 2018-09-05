const int num = 6;
const int kpinleds[num]={2,3,4,5,6,7};
void setup() {
  for(int k=0;k<num;k++)
  {
    pinMode(kpinleds[k],OUTPUT);
  }
}

void loop() {

  for(int i=0;i<num;i++)
  {
    digitalWrite(kpinleds[i],LOW);
    delay(100);
    digitalWrite(kpinleds[i],HIGH);
  }
  for(int x=num-1;x>=0;x--)
  {
    digitalWrite(kpinleds[x],HIGH);
    delay(100);
    digitalWrite(kpinleds[x],LOW);
  }
}

