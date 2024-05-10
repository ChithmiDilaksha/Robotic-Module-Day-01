#define LMF 8 // left motor forword
#define LMS 7 // left motor space
#define LMB 6 // left motor backword
#define RMF 4 
#define RMB 3
#define RMS 5

#define LS 13 // left side
#define MS 12// middle side
#define RS 11// right side

void setup() {
 for(int i=3;i<9;i++)
 {
  pinMode(i,OUTPUT);
 }
}

void loop() {
  // put your main code here, to run repeatedly:
  forward();
  delay(2000);

}
void forward()
{
   digitalWrite(LMF,1);
   digitalWrite(LMB,0);
   digitalWrite(LMS,100);
   digitalWrite(RMF,1);
   digitalWrite(RMB,0);
   digitalWrite(RMS,100);
}
void left()
{
   digitalWrite(LMF,0);
   digitalWrite(LMB,1);
   digitalWrite(LMS,100);
   digitalWrite(RMF,1);
   digitalWrite(RMB,0);
   digitalWrite(RMS,100);
}
void right()
{
   digitalWrite(LMF,1);
   digitalWrite(LMB,0);
   digitalWrite(LMS,100);
   digitalWrite(RMF,0);
   digitalWrite(RMB,1);
   digitalWrite(RMS,100);
}

void back()
{
   digitalWrite(LMF,0);
   digitalWrite(LMB,1);
   digitalWrite(LMS,100);
   digitalWrite(RMF,0);
   digitalWrite(RMB,1);
   digitalWrite(RMS,100);
}

void stop()
{
   digitalWrite(LMF,1);
   digitalWrite(LMB,1);
   digitalWrite(LMS,100);
   digitalWrite(RMF,0);
   digitalWrite(RMB,0);
   digitalWrite(RMS,100);
}