#include <Servo.h>
int sensorValue = 0;
int ledPin_1 = 2;
int ledPin_2 = 4;
int ledPin_3 = 6;
int outValue = 0;
Servo servo_8;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  servo_8.attach(8);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  outValue = map(sensorValue,0,1023,0,180);
  servo_8.write(outValue);
  delay(10);
  Serial.println(sensorValue);

  
  delay(100);
  
}
