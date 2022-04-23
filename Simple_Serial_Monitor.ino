int counter = 0;
  
void setup() {
    //Starts a new instance of the serial
    //...begin(<Bits Per Second for Transmission>)
    //9600 is a common standard
  Serial.begin(9600);

    //...println(<String or data to be printed>)
    //Follows C++ printing 
  Serial.println("Set-up complete!");
}

void loop() {

  Serial.println(counter++);
  
  delay(500);

}
