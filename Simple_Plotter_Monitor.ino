
void setup() {
  Serial.begin(9600); 
}

void loop() {

    //Obtains the data from A0 pin
    //With nothing plugged into the pin it records 
    //small changes in eletrical charge (Energy)
  int y1 = analogRead(A0);

  Serial.println(y1);

  delay(100);
}
