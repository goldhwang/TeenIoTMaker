//모션센서 테스트 1차


int motionSensor = 2; // 모션센서 out 2번 사용
int pirState = LOW; //모션 감지 상태 체크
int val = 0; //모션센서 상태를 숫자로 하려고

void setup() {
  
  pinMode(motionSensor , INPUT); // declare sensor as input
  Serial.begin(9600);
}

void loop() {
  //모션센서를 읽어오기
  val = digitalRead(motionSensor); // read input value
 // Serial.println(val);
  if (val == 1 ){
   Serial.println("Motion Dectect Now!!!");
  }else{
    Serial.println("Not found!!!!");
  }
}
