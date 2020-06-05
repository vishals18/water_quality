#include <dht.h>
dht DHT;
#define DHT11_PIN 6
unsigned long myChannelNumber = 258156;
const char * myWriteAPIKey = "BOAWS6JBLR8SE471";


#define THRESHOLD x
void setup() {
  Serial.begin(9600); //Baud rate: 9600
}
void loop() {
    int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  delay(1000);
  
  int sensorValue = analogRead(A0);// read the input on analog pin 0:
  float voltage = sensorValue * (5.0 / 1024.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  Serial.println(voltage); // print out the value you read:
  delay(500);
if(voltage<=THRESHOLD){
  Serial.println(“HIGH TURBIDITY”);
}
else
{
  Serial.println(“LOW TURBIDITY”);
}
}
