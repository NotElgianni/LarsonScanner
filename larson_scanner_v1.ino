int i = 13;
int LED = i;
boolean Dir = true;//richting

void setup() {
  Serial.begin(9600);//start serial communications
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Dir == true){
    if(i <= 14){
      digitalWrite(i, HIGH);
      delay(50);
      digitalWrite(i, LOW);
      delay(50);
      i = i - 1;
      Serial.println(i);
      if(i == 8){
        Dir = false;
      }
    }
  }else if (Dir == false){
    if(i <= 14){
      digitalWrite(i, HIGH);
      delay(50);
      digitalWrite(i, LOW);
      delay(50);
      i = i + 1;
      Serial.println(i);
      if(i == 13){
        Dir = true;
      }
  }
}
}
