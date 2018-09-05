int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int h = 9;


void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);

}

void loop() {
  // on
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(h,HIGH);
  delay(1000);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  delay(1000);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  delay(1000);
  digitalWrite(g,LOW);
  digitalWrite(h,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  delay(1000);
  
}
