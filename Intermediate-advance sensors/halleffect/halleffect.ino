#define HALL_SENSOR_PIN A0  // Analog pin for Hall sensor
#define LED_PIN 13  // LED to indicate magnet detection

float baselineVoltage;  // Stores the sensor's default voltage

void setup() {
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
    
    // Read the initial sensor value (assuming no magnet is nearby)
    baselineVoltage = analogRead(HALL_SENSOR_PIN) * (5.0 / 1023.0);
    Serial.print("Baseline Voltage: ");
    Serial.println(baselineVoltage, 2);
}

void loop() {
    int sensorValue = analogRead(HALL_SENSOR_PIN);  // Read sensor value
    float voltage = sensorValue * (5.0 / 1023.0);  // Convert to voltage

    Serial.print("Sensor Voltage: ");
    Serial.println(voltage, 2);

    // Check if voltage deviates significantly from baseline
    if (voltage > (baselineVoltage + 0.3) || voltage < (baselineVoltage - 0.3)) {  
        Serial.println("Magnet Detected!");
        digitalWrite(LED_PIN, HIGH);  // Turn LED on
    } else {
        Serial.println("No Magnet Detected.");
        digitalWrite(LED_PIN, LOW);  // Turn LED off
    }

    delay(500);
}

