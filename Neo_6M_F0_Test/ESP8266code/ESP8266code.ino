#include <ESP8266WiFi.h>
// #include "ThingSpeak.h"
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "dUKN5WUYo-Wh32_syAEg78pUkpQtoNUj"

char ssid[] = "TATA PLAY 5G";   
char pass[] = "12345678";  
char auth[] = BLYNK_AUTH_TOKEN;

IPAddress staticIP(192, 168, 1, 100);  // Static IP address configuration
IPAddress gateway(192, 168, 1, 1);     // Default gateway
IPAddress subnet(255, 255, 255, 0);    // Subnet mask

// int keyIndex = 0;           

float extractValue(String data)
{
  int colonIndex = data.indexOf(':');
  
  if (colonIndex >= 0) 
  {

    String latlongString = data.substring(colonIndex + 2);

    float Val = latlongString.toFloat();
    
    return Val;
  } 
  else 
  {
    Serial.println("Colon not found in data string.");
    return 0.0;
  }
}

void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);
    Serial.println("UART_RX");
    // ThingSpeak.begin(client);

    // WiFi.config(staticIP, gateway, subnet);

    // WiFi.begin(ssid, pass);

    // while(WiFi.status() != WL_CONNECTED)
    // {
    //   Serial.print("\nConnecting..");
    //   delay(500);     
    // } 
    // Serial.println("\nConnected.");
    Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
    static String receivedData = ""; 
    float data = 0;
    float lat = 0;
    float lng = 0;
    String val1,val2;
    int flag = 0;

    Blynk.run();

    while (Serial.available() > 0) { 
        char receivedChar = Serial.read(); 
        if (receivedChar == '\n') { 
            Serial.print("Received: ");
            data = extractValue(receivedData);
            if(flag == 0)
            {
              lat = data/100;
              flag = 1;
            }
            else
            {
              lng = data/100;
              flag = 0;
            }
            Serial.println(data); 
            receivedData = ""; 
        } else {
            receivedData += receivedChar; 
        }
    }
    Serial.printf("l0 : %.6f\r\n",lat);
    Serial.printf("l1 : %.6f\r\n",lng);

    // sprintf(val1 , "%.6f",lat);
    // sprintf(val2, "%.6f",lng);

    val1 = String(lat,6);
    val2 = String(lng,6);

    Blynk.virtualWrite(V1, val1);
    Blynk.virtualWrite(V0, val2);
    Serial.flush();
    delay(5000); 
}

