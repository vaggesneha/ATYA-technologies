#define LDR_PIN A0  // LDR connected to analog pin A0

void setup() {
    Serial.begin(9600);  // Start serial communication
}

void loop() {
    int lightValue = analogRead(LDR_PIN);  // Read ambient light level

    Serial.print("Ambient Light Level: ");
    Serial.println(lightValue);  // Print the light intensity

    delay(500);  // Delay for stability
}

