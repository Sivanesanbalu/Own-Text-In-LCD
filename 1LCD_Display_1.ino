#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();      
  lcd.backlight();  


  lcd.setCursor(0, 0);     
  lcd.print("Hello 3Gen");  

  lcd.setCursor(0, 1);      
  lcd.print("Techies!");
}

void loop() {
  // No need to update anything in the loop
}
