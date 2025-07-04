//Push button 
/**** Atya technologies pvt. Ltd. - push button ***/

int button_PIN = 4; // connect to digital pin D2

void setup()
{
    Serial.begin(9600); // initialize serial comm at 9600 baud
    pinMode(button_PIN, INPUT_PULLUP);
    Serial.println("Welcome to Atya technologies pvt. Ltd.");
}

void loop()
{
    byte buttonstate = digitalRead(button_PIN);
    Serial.print("Welcome to Atya Tech");
    Serial.print("Push Button: ");

    if (buttonstate == LOW)
    {
        Serial.println("button is pressed");
    }
    else
    {
        Serial.println("button is not pressed");
    }

    Serial.println();
    delay(1000); // add delay in milliseconds
}

