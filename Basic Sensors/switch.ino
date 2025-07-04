//Slide switch
/* Atya Technologies Pvt. Ltd. - Slide Switch */

// Define switch pins
int switchPin1 = 11;  // Connect to digital pin D9
int switchPin2 = 10;  // Connect to digital pin D12
int switchPin3 = 9;   // Connect to digital pin D11

// Define LED pins
int ledPin1 = 2;   // Onboard LED connected to D7 pin
int ledPin2 = 13;  // Onboard LED connected to D13 pin
int ledPin3 = 7;   // Onboard LED connected to D2 pin

 
 void setup()
 {
    Serial.begin(9600);
    Serial.println("Welcome to Atya Technologies Pvt. Ltd.");

    // Initialize switch pins as inputs with internal pull-up resistors
    pinMode(switchPin1, INPUT_PULLUP);
    pinMode(switchPin2, INPUT_PULLUP);
    pinMode(switchPin3, INPUT_PULLUP);

    // Initialize LED pins as outputs
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
}



   void loop()
   {
    // Read the state of each switch
    int switchState1 = digitalRead(switchPin1);
    int switchState2 = digitalRead(switchPin2);
    int switchState3 = digitalRead(switchPin3);

    // Print switch states to the serial monitor
    Serial.print("Slide Switch: ");
    // Check if each switch is ON or OFF and control the LEDs
    if (switchState1 == LOW) {
        digitalWrite(ledPin1, HIGH);
        Serial.print("Switch 1 ON ");
    } else {
        digitalWrite(ledPin1, LOW);
        Serial.print("Switch 1 OFF ");
    }

    if (switchState2 == LOW) {
        digitalWrite(ledPin2, HIGH);
        Serial.print("Switch 2 ON ");
    } else {
        digitalWrite(ledPin2, LOW);
        Serial.print("Switch 2 OFF ");
    }

    if (switchState3 == LOW) {
        digitalWrite(ledPin3, HIGH);
        Serial.print("Switch 3 ON ");
    } else {
        digitalWrite(ledPin3, LOW);
        Serial.print("Switch 3 OFF ");
    }

    Serial.println(); // Move to the next line in the Serial Monitor
    delay(1000);  // Small delay for stability
}
