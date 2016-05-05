const byte led[]={5,6,7,8,9};
void setup() {
  // put your setup code here, to run once:
for(int i=0;i<=4;i++){
  pinMode(led[i],OUTPUT);
  
  }
}

void loop() {


for( int b=4;b>=0;b--){
for(int c=0;c<=b;c++){
  digitalWrite(led[c],HIGH);
  delay(500);
  digitalWrite(led[c],LOW);  
  }
  digitalWrite(led[b],HIGH);
}
for(int a=0;a<=4;a++){
  digitalWrite(led[a],LOW);}

}

  

  

