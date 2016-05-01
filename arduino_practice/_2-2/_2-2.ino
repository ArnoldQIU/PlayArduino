const byte led[]={8,9};
void setup() {
  // put your setup code here, to run once:
for(int i=0;i<2;i++){
  pinMode(led[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<2;i++){
  digitalWrite(led[i],HIGH);
  delay(1500);
  digitalWrite(led[i],LOW);
  }
}
