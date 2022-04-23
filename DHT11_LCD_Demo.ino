#include <Adafruit_Sensor.h>
#include <DHT.h>

    //Is included with the Arduino IDE
#include <LiquidCrystal.h>

LiquidCrystal lcd(3, 4, 5, 6, 7, 8);

DHT dht = DHT(2, DHT11);

void setup() {
    //Sets up serial, DHT, and LCD
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);

}

void loop() {
    //Clears the screen so it doesn't keep adding text
  lcd.clear();

  float h = dht.readHumidity();
  float t = dht.readTemperature();

while(dht.readHumidity() < 30){
      lcd.print("HIGH HUMIDITY");
      lcd.setCursor(0, 1);
      delay(1000);
      lcd.clear();
  }
   
    //Printing the tempuature
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223); //Degree character

    //Moves to the cursor to the next line
  lcd.setCursor(0,1);

    //Prints the humidity
  lcd.print("Humidity:  ");
  lcd.print(h); 

  delay(2000);

}


/* Things you can include */

/*
 * Warning Message
 *   while(dht.readHumidity() > 30){
      lcd.print("HIGH HUMIDITY");
      lcd.setCursor(0, 1);
      delay(1000);
      lcd.clear();
  }

  Or 

  Notification Ring

  pinMode(9, OUTPUT);
  
  if(h > 30){
    digitalWrite(9, HIGH);
    delay(250);
    digitalWrite(9, LOW);
    }


 */
