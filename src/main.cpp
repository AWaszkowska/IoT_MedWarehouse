// #include <Arduino.h>
// #include "DHT.h"

// #define DHTPIN 32 // digital pin connected to the DHT sensor
// #define DHTTYPE DHT22

// // initializing a sensor
// DHT dht(32, DHT22);

// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(115200);
//   dht.begin();
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   delay(2000);
//   float h = dht.readHumidity();
//   float t = dht.readTemperature();
  
//   //check if reading failed
//   if (isnan(h) || isnan(t)){
//     Serial.println(F("Failed to read from DHT sensor"));
//     return;
//   }

//   // compute heat index in Celsius
//   float hic = dht.computeHeatIndex(t, h, false);

//   Serial.print(F("Humidity: "));
//   Serial.print(h);
//   Serial.print(F("%  Temperature: "));
//   Serial.print(t);
//   Serial.print(F("C "));
//   Serial.print(F("Heat index: "));
//   Serial.print(hic);
//   Serial.print(F("C "));


// }