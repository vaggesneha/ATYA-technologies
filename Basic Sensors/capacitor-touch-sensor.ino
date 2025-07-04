//Capacitive touch sensor 
/*** Atya Technologies Pvt.Ltd. - Capacitive Touch Sensor ***/

// Variable Declaration:
int sensorPin = A2;  // Pin for capacitive touch sensor (analog pin)
int ledPin = 7;      // Onboard LED connected to D7 pin

// The setup routine runs once when you press reset:
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    Serial.println("Welcome to Atya Technologies Pvt. Ltd.");
}

// The loop routine runs over and over again forever:
void loop() {
    Serial.print("Capacitive Touch Sensor: ");
    
    // Read the state of the capacitive touch input pin
    int AnalogValue = analogRead(sensorPin);  // Read the analog value from the sensor

    if (AnalogValue > 300) {  // Threshold value to detect touch (adjust as needed)
        digitalWrite(ledPin, HIGH);
        Serial.println("Touch Detected");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("Touch Not Detected");
    }

    delay(500);  // Delay in milliseconds
    Serial.println();
}

