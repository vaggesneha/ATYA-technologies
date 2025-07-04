#define FLAME_RIGHT 2  // Right Flame Sensor
#define FLAME_FRONT 3  // Front Flame Sensor
#define FLAME_LEFT 4   // Left Flame Sensor
#define FLAME_BACK 5   // Back Flame Sensor
#define FLAME_CENTER 6 // Center Flame Sensor

void setup() {
    Serial.begin(9600);  // Start serial communication
    pinMode(FLAME_RIGHT, INPUT);
    pinMode(FLAME_FRONT, INPUT);
    pinMode(FLAME_LEFT, INPUT);
    pinMode(FLAME_BACK, INPUT);
    pinMode(FLAME_CENTER, INPUT);
}

void loop() {
    bool right = digitalRead(FLAME_RIGHT);
    bool front = digitalRead(FLAME_FRONT);
    bool left = digitalRead(FLAME_LEFT);
    bool back = digitalRead(FLAME_BACK);
    bool center = digitalRead(FLAME_CENTER);

    Serial.println("Flame Detection Status:");
    if (right == LOW) Serial.println(" Flame Detected on Right");
    if (front == LOW) Serial.println(" Flame Detected in Front");
    if (left == LOW) Serial.println(" Flame Detected on Left");
    if (back == LOW) Serial.println(" Flame Detected at Back");
    if (center == LOW) Serial.println(" Flame Detected at Center");

    if (right == HIGH && front == HIGH && left == HIGH && back == HIGH && center == HIGH) {
        Serial.println("✅ No Flame Detected");
    }

    delay(500);  // Delay for stability
}

