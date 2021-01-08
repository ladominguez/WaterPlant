#include <Wire.h>

const int AirValue = 2500;   // Replaza por el valor que consideres conveniente para el aire o tierra seca
const int WaterValue = 400;  // Remplaza el valor que consideres conveniente para el agua o tierra humeda

int soilMoistureValue = 0;
int soilmoisturepercent=0;
void setup() {
  Serial.begin(9600);

}
void loop() {
soilMoistureValue = analogRead(34);  //put Sensor insert into soil
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

}
else if(soilmoisturepercent >0 && soilmoisturepercent < 100)
{
  Serial.print(soilmoisturepercent);
  Serial.println("%");
  

  delay(250);
}  
}
