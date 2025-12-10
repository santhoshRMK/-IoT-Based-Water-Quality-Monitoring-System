#define BLYNK_PRINT Serial 
#include <ESP8266WiFi.h> 
#include <BlynkSimpleEsp8266.h> 
#define BLYNK_TEMPLATE_ID "TMPL3SfZ8YPqm" 
#define BLYNK_TEMPLATE_NAME "TDSsensor" 
#define BLYNK_AUTH_TOKEN "jqI0EfvV9KwIVbI3k1n2vxB06w1y-6jd" 
char auth[] = "jqI0EfvV9KwIVbI3k1n2vxB06w1y-6jd"; 
char ssid[] = "Galaxy M31s234D"; 
char pass[] = "sanjay43203"; 
#define TDS_SENSOR_PIN A0 
void setup() 
{ 
Serial.begin(115200); 
Blynk.begin(auth, ssid, pass); 
} 
void loop() 
{ 
Blynk.run(); 
int tdsValue = analogRead(TDS_SENSOR_PIN); 
Blynk.virtualWrite(V0, tdsValue); 
delay(1000); 
}
