#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int inputPin = 7;

int value = 0;
int numero = 0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("MATRICULAS");
  // Print a message to the LCD.

  pinMode(inputPin, INPUT); // sets the digital pin 7 as input
}
void loop()
{
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

  value = digitalRead(inputPin);

  if (value)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Limpiando...");
    delay(2000);
    numero++;
  }
 switch(numero){
  case 1: 
  lcd.setCursor(0,0);
  lcd.print("202239106.");
  break;
  case 2:
  lcd.setCursor(0, 0);
  lcd.print("202251303.");
  break;
  case 3:
  lcd.setCursor(0, 0);
  lcd.print("00000000.");
  break;
  case 4: 
  lcd.setCursor(0,0);
  lcd.print("FIN.......");

  }
} 
