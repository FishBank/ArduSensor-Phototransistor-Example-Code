/* ArduSensor Phototransitor Read

Reads the ArduSensor Photoransistor, and prints the distance between the sensor
and a near object (1cm away)

Qtechknow kits required:
  ArduSensor Phototransistor
  
made on 12 July 12
created by Quin
*/

int ArduSensorValue;   // variable to store the value of the ArduSensor

void setup() {
  Serial.begin(9600);  // start Serial communication at 9600 baud
}

void loop() {
  // assign the variable to the value of the ArduSensor
  ArduSensorValue=analogRead(0);

  int val = map(ArduSensorValue, 35, 950, 10, 0);  // convert the value
  // to easily readable numbers
  
  Serial.println(val);  // print the value on the Serial monitor
  delay(100);
}
