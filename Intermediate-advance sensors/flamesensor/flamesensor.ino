#define FLAME_SENSOR_PIN 2  // Digital pin connected to flame sensor

void setup() {
    Serial.begin(9600);
    pinMode(FLAME_SENSOR_PIN, INPUT);
}

void loop() {
    int flameState = digitalRead(FLAME_SENSOR_PIN);  // Read sensor output

    if (flameState == LOW) {  // LOW means flame is detected
        Serial.println("Flame Detected: YES");
    } else {
        Serial.println("Flame Detected: NO");
    }

    delay(500);
}

