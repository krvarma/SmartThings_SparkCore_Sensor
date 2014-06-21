// This #include statement was automatically added by the Spark IDE.
#include "DHT.h"

#define DHTPIN D4
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

int getDHTTemperature(String args){
    float temp = dht.readTemperature();

    return (int)temp;
}

int getDHTHumidity(String args){
    float humidity = dht.readHumidity();
    
    return (int)humidity;
}

void setup() {
     dht.begin();
     
     Spark.function("getTemp", getDHTTemperature);
     Spark.function("getHum", getDHTHumidity);
}

void loop() {

}