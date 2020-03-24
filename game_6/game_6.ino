int distanceThreshold = 0;
int cm = 0;
int inches = 0;
int ledPin_1 = 2;
int ledPin_2 = 4;
int ledPin_3 = 6;


long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
 
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  distanceThreshold = 350;
  
  cm = 0.01723 * readUltrasonicDistance(7, 5);

  inches = (cm / 2.54);
  Serial.print(cm);
  Serial.print(" cm, ");
  Serial.print(inches);
  Serial.println(" in");
  
  if (cm > distanceThreshold) {
    digitalWrite(ledPin_1, LOW);
    digitalWrite(ledPin_2, LOW);
    digitalWrite(ledPin_3, LOW);
  }
  if (cm <= distanceThreshold && cm > distanceThreshold - 100) {
    digitalWrite(ledPin_1, HIGH);
    digitalWrite(ledPin_2, LOW);
    digitalWrite(ledPin_3, LOW);
  }
  if (cm <= distanceThreshold - 100 && cm > distanceThreshold - 250) {
    digitalWrite(ledPin_1, HIGH);
    digitalWrite(ledPin_2, HIGH);
    digitalWrite(ledPin_3, LOW);
  }
  if (cm <= distanceThreshold - 250 && cm > distanceThreshold - 350) {
    digitalWrite(ledPin_1, HIGH);
    digitalWrite(ledPin_2, HIGH);
    digitalWrite(ledPin_3, HIGH);
  }
  if (cm <= distanceThreshold - 350) {
    digitalWrite(ledPin_1, HIGH);
    digitalWrite(ledPin_2, HIGH);
    digitalWrite(ledPin_3, HIGH);
  }
  
  delay(100);
  
}
