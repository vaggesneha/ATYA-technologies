#include <TM1637Display.h>

// Define TM1637 pins
#define SCL 5  // Clock pin
#define SDA 4  // Data pin

TM1637Display display(SCL, SDA);

void setup() {
    display.setBrightness(7); // Set brightness (0-7)
}

void loop() {
    int number = 1234; // Example number to display

    display.showNumberDec(number, false); // Display number normally

    delay(1000); // Wait 1 second

    display.showNumberDecEx(number, 0b01000000, false); // Display number with colon (useful for clock)

    delay(1000);
}

