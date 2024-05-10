#define MF 1
#define MB 2
#define MS 3

void setup() {
 pinMode(MF,OUTPUT);
 pinMode(MB,OUTPUT);
 pinMode(MS,OUTPUT);
}

void loop() {
  digitalWrite(MF,1);
  digitalWrite(MB,0);
  digitalWrite(MS,100);
  delay(2000);
  digitalWrite(MF,0);
  digitalWrite(MB,1);
  digitalWrite(MS,100);
  delay(2000);
  digitalWrite(MF,0);
  digitalWrite(MB,0);
  digitalWrite(MS,100);
  delay(2000);
  
}
