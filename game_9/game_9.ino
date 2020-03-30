#include <LiquidCrystal.h>

int val_1 = 0;
int val_2 = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(10,INPUT);
  pinMode(9,INPUT);
  
}

void loop() {
    val_1 = digitalRead(10);
  if(val_1 == HIGH){
    lcd.begin(3, 2);
    lcd.setCursor(0, 1);
    lcd.print("Add");
    }
   val_2 = digitalRead(9);
  if(val_2 == HIGH){
    lcd.begin(6, 2);
    lcd.setCursor(0, 1);
    lcd.print("Delete");
    }
}
