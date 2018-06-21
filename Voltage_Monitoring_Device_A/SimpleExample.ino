#include <AmazonIOTClient.h>
#include "ESP8266AWSImplementations.h"

Esp8266HttpClient httpClient;
Esp8266DateTimeProvider dateTimeProvider;

AmazonIOTClient iotClient;
ActionError actionError;

char *ssid="MySSID";
char *password="MyPASS";

void setup() {
  Serial.begin(115200);
  delay(10);

  // Connect to WAP
  Serial.print("Connecting to ");

}

void loop(){

}

