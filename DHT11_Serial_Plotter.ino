    //Include libraries through the library manager 
#include <Adafruit_Sensor.h>
#include <DHT.h>

    //Creates a dht object on pin 2 using DHT11 type
DHT dht = DHT(2, DHT11);  

void setup()
{
  Serial.begin(9600);
  dht.begin();
 
}

void loop()
{
  Serial.println();

    //Reads the Humidity and Temperature 
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print(h);
  Serial.print(" "); // a space ' ' or  tab '\t' character is printed between the two values.
  Serial.println(t);

  delay(2000);

}
