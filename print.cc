
 //number나의 위치 값
 int numX = 2020;
 char s = 'A';

 int numY = 1999;

 int numA = 180;

 char T = 'Y';

 int numQ = 2050;
 
void setup(){
  Serial.begin(9600);
}
 
void loop(){
  Serial.println(numX + numY + numA);     
  delay(1000);
  Serial.println(s);     
  delay(1000);
  Serial.println(T);
  delay(1000);
  Serial.println(numQ);
}
