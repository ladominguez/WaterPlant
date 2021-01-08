#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


const int AirValue = 2300;   // Replaza por el valor que consideres conveniente para el aire o tierra seca
const int WaterValue = 400;  // Remplaza el valore que consideres conveniente para el agua o tierra humeda

int soilMoistureValue = 0;
int soilmoisturepercent=0;
void setup() {

}
void loop() {
soilMoistureValue = analogRead(A0);  //put Sensor insert into soil
Serial.println(soilMoistureValue);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
if(soilmoisturepercent > 100)
{
  Serial.println("100 %");
  
}
else if(soilmoisturepercent <0)
{
  Serial.println("0 %");
  
  delay(250);
  display.clearDisplay();
}
else if(soilmoisturepercent >0 && soilmoisturepercent < 100)
{
  Serial.print(soilmoisturepercent);
  Serial.println("%");
  

  delay(250);
}  
}
