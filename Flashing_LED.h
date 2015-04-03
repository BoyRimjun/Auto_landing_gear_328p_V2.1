/*
// ####################################################################################################################
-- Add Flashing_LED By Boy Rimjun
-- form pin = 4
-- on digitalWrite = 4
-- LED 5 mm.
-- R 220 Ohm
-- FlashingOn(); to void loop()
-- void Flashing_LEDInt()  to void setup()
-- auto_landing_gear_328p V2  03042015 2139
-- 31032015 1802
// ####################################################################################################################  
*/ 
 

#define LEDFlashing 4  // LED OUTPUT PIN 4  By Boy Rimjun
void Flashing_LEDInt(){
   Serial.begin (9600);
   Serial.print("Add landing gear Flashing_LED By Boy Rimjun 03042015 2151");Serial.println("\t");
   pinMode(LEDFlashing, OUTPUT); 
}

void Flashing1()
{
  digitalWrite(LEDFlashing, HIGH);
  delay(50);
  digitalWrite(LEDFlashing, LOW);
  delay(50);
}

void Flashing2()
{
  digitalWrite(LEDFlashing, HIGH);
  delay(50);
  digitalWrite(LEDFlashing, LOW);
  delay(50);
}


// Add FlashingOn() 31032015
void FlashingOn()
{
   Flashing1(); Flashing1(); Flashing1();
   Flashing2(); Flashing2(); Flashing2();
   Flashing1(); Flashing1(); Flashing1();
   delay(1500); // 3000
}

