
int ledPin_1 = 2;
int inPin_1 = 8;
int val_1 = 0;

int ledPin_2 = 4;
int inPin_2 = 9;
int val_2 = 0;

int ledPin_3 = 6;
int inPin_3 = 10;
int val_3 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin_1, OUTPUT);
  pinMode(inPin_1, INPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(inPin_2, INPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(inPin_3, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
  val_1 = digitalRead(inPin_1);
  if(val_1 == HIGH){
    digitalWrite(ledPin_1, HIGH);
     Serial.print("LED 1 ON");
      Serial.print("\n");
    }else{
      digitalWrite(ledPin_1, LOW);
    Serial.print("LED 1 OFF");
      Serial.print("\n");
      }

      val_2 = digitalRead(inPin_2);
  if(val_2 == HIGH){
    digitalWrite(ledPin_2, HIGH);
    Serial.print("LED 2 ON");
      Serial.print("\n");
    
    }else{
      digitalRead(ledPin_2);
      digitalWrite(ledPin_2, LOW);
    Serial.print("LED 2 OFF");
      Serial.print("\n");
      }

      val_3 = digitalRead(inPin_3);
  if(val_3 == HIGH){
    digitalWrite(ledPin_3, HIGH);
    Serial.print("LED 3 ON");
      Serial.print("\n");
    }else{
      digitalWrite(ledPin_3, LOW);
    Serial.print("LED 3 OFF");
      Serial.print("\n");
    }     
  delay(200);
}
