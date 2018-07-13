/*
  Analog Input of UV Sensor for ESP8266

  Reads the values from S12SD sensor and translates that into the UV Index..

  created by André Luiz
  modified 13 July 2018
  by ODOC

*/

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorVoltage = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(115200);
}

void loop() {
  // read the value from the sensor:
  sensorVoltage = analogRead(sensorPin)*(5000/1023.0);
  Serial.print("sensor voltage = ");
  Serial.print(sensorVoltage);
  Serial.println(" mV");

  index(sensorVoltage);
  delay(2000);
}

int index(int Vsig){
if (Vsig < 50) {
    Serial.print("UV Index: 0 "); Serial.println("   Exposure level - NONE (You're probably at home!) ");
 }
  if (Vsig > 50 && Vsig < 227) {
      Serial.print("UV Index: 1 "); Serial.println("   Exposure level - LOW (You're probably at home!) ");
   }
  if (Vsig > 227 && Vsig < 318) {
      Serial.print("UV Index: 2 "); Serial.println("   Exposure level - LOW (You can go outside and have fun!) ");
   }
  if (Vsig > 318 && Vsig < 408) {
      Serial.print("UV Index: 3 "); Serial.println("   Exposure level - MODERATE (Sun starts to annoy you) ");
   }
  if (Vsig > 408 && Vsig < 503) {
      Serial.print("UV Index: 4 "); Serial.println("   Exposure level - MODERATE (Sun starts to annoy you) ");
   }
  if (Vsig > 503 && Vsig < 606) {
      Serial.print("UV Index: 5 "); Serial.println("   Exposure level - MODERATE (Sun starts to annoy you) ");
   }
  if (Vsig > 606 && Vsig < 696) {
      Serial.print("UV Index: 6 "); Serial.println("   Exposure level - HIGH (Get out from the sunlight! get out now!) ");
   }
  if (Vsig > 696 && Vsig < 795) {
      Serial.print("UV Index: 7 "); Serial.println("   Exposure level - HIGH (Get out from the sunlight! get out now!) ");
   }
  if (Vsig > 795 && Vsig < 881) {
      Serial.print("UV Index: 8 "); Serial.println("   Exposure level - VERY HIGH (Get out from the sunlight! get out now!) ");
   }
  if (Vsig > 881 && Vsig < 976) {
      Serial.print("UV Index: 9 "); Serial.println("   Exposure level - VERY HIGH (If you value your health, don't go outside, just stay at home!) ");
   }
  if (Vsig > 976 && Vsig < 1079) {
      Serial.print("UV Index: 10 "); Serial.println("   Exposure level - VERY HIGH (If you value your health, don't go outside, just stay at home!) ");
   }
  if (Vsig > 1079 && Vsig < 1170) {
      Serial.print("UV Index: 11 "); Serial.println("   Exposure level - EXTREME (If you value your health, don't go outside, just stay at home!) ");
   }
  if (Vsig > 1170) {
      Serial.print("UV Index: 11+ "); Serial.println("   Exposure level - EXTREME (You will probably die in 3, 2, 1... Just JOKING, don't be scared...) - intensity of sunlight is really at maximum ");
   }
}
