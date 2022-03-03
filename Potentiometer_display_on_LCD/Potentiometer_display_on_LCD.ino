/*
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
*/
//Code using existing arduino LCD code. This code uses a potentiometer to change what is displayed on the LCD.


// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int potPin = A0;
int val = 0;

void setup() {

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);  
}

void loop() {
  val = analogRead(potPin);
  val = map(val, 0, 5000, 0, 1);
  //Map the resistance range of the potentiometer into two digital values. 5000 is from the 10k ohm potentiometer halved.
  //Using the value of half means that one half of the range of the pot equals one value, and the other half of the range equals another value.
  if (val == 0) {
    lcd.setCursor(0, 0);
    lcd.print("Menu 1");
    //Print "Menu 1" on the LCD if the pot is in the first half of it's range.
  }
  
  if (val == 1) {
    lcd.setCursor(0, 0);
    lcd.print("Menu 2");
    //Print "Menu 2" on the LCD if the pot is in the second half of it's range.
  }
}
