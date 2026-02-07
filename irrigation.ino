int soilMoistureValue = 30;
int moistureThreshold = 40;

void setup() {
  Serial.begin(9600);
  Serial.println("IoT Based Smart Automatic Irrigation System");
  Serial.println("Device ID: ESP32_01");
}

void loop() {

  soilMoistureValue = 30;

  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureValue);

  if (soilMoistureValue < moistureThreshold) {
    Serial.println("Pump Status: ON");
    Serial.println("Alert: Soil Dry");
  } else {
    Serial.println("Pump Status: OFF");
    Serial.println("Alert: Soil Wet");
  }

  Serial.println("Timestamp: 08 February 2026 10:15 AM");
  Serial.println("------------------------------------");

  delay(5000);
}

