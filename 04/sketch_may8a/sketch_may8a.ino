#define SWITCH 8
#define LED 2

void setup() {
  pinMode(SWITCH,INPUT);
  pinMode(LED,OUTPUT);

}

void loop() {
 if(digitalRead(8)==1)
 {
  digitalWrite(LED,1);
 }
 else
 {
  digitalWrite(LED,0);
 }

}
