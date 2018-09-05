int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;


void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);

}

void loop() {
  // on
  digitalWrite(a,HIGH);
  delay(100);
  digitalWrite(b,HIGH);
  delay(100);
  digitalWrite(c,HIGH);
  delay(100);
  digitalWrite(d,HIGH);
  delay(100);
  digitalWrite(e,HIGH);
  delay(100);
  digitalWrite(f,HIGH);
  delay(100);
  // off
  digitalWrite(f,LOW);
  delay(100);
  digitalWrite(e,LOW);
  delay(100);
  digitalWrite(d,LOW);
  delay(100);
  digitalWrite(c,LOW);
  delay(100);
  digitalWrite(b,LOW);
  delay(100);
  digitalWrite(a,LOW);
  delay(100);

}
