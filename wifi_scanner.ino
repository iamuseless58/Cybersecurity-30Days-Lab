#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("Setup done");
}

void loop() {
  Serial.println("Scanning WiFi...");

  int n = WiFi.scanNetworks();
  Serial.println("Scan complete");

  if (n == 0) {
    Serial.println("No networks found");
  } else {
    for (int i = 0; i < n; ++i) {
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" | Signal: ");
      Serial.print(WiFi.RSSI(i));
      Serial.println(" dBm");
    }
  }

  Serial.println("");
  delay(5000);
}