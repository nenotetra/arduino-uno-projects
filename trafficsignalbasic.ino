int l=6,m=9,n=10;
void setup() {
  pinMode(l,OUTPUT);
  pinMode(m,OUTPUT);
  pinMode(n,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(l,255);
  delay(4000);
  analogWrite(l,0);
  analogWrite(m,255);
  delay(1000);
  analogWrite(m,0);
  analogWrite(n,255);
  delay(2000);
  analogWrite(n,0);
  // put your main code here, to run repeatedly:

}
