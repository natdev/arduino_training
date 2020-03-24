int sensorValue = 0;
int ledPin_1 = 2;
int ledPin_2 = 4;
int ledPin_3 = 6;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
  if(sensorValue >= 20 && sensorValue < 184){
    digitalWrite(ledPin_1, HIGH);
  }else{
  digitalWrite(ledPin_1, LOW);
  }
  
  if(sensorValue >= 184 && sensorValue < 532){
    digitalWrite(ledPin_2, HIGH);
  }else{
  digitalWrite(ledPin_2, LOW);
  }
  
  if(sensorValue >= 532){
    digitalWrite(ledPin_3, HIGH);
  }else{
  digitalWrite(ledPin_3, LOW);
  }
  
  delay(100);
  
}
