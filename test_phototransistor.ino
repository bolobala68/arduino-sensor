int photoTran = A0;
int reading = 0;

void setup(){
  pinMode(photoTran,INPUT);
  Serial.begin(9600);
}

void loop(){
  reading = analogRead(photoTran);
  Serial.println(reading);
  delay(100);
}
