int brightness = 0;
int fadeAmount = 18;
int nbLeds = 14;
int init = 0;
void setup() {
  
}

void loop() {
      
  pinMode(init,OUTPUT);
  analogWrite(init, brightness);

  brightness = brightness + fadeAmount;
  init = init + 1;

  
  
  delay(200);

}
