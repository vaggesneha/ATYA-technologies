
// Variable Declaration
int buzzerPin = 4; // Connect to digital pin D2

// The setup routine runs once when you press reset:
void setup() 
{
    pinMode(buzzerPin, OUTPUT);
    Serial.begin(9600); // Initialize serial monitor communication
    Serial.println("Welcome to Atya Technologies Pvt. Ltd.");
}

// The loop routine runs over and over again forever:
void loop() 
{
    Serial.print("Buzzer: ");
    
    // Turn the buzzer ON
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Buzzer is ON");
    Serial.println();
    delay(1000); // Add delay of 1 second

    Serial.print("Buzzer: ");

    // Turn the buzzer OFF
    digitalWrite(buzzerPin, LOW);
    Serial.println("Buzzer is OFF");
    Serial.println();
    delay(3000); // Add delay of 3 seconds
}

