const int redpin = 9;
const int greenpin = 10;
const int bluepin = 11;
void setup()
{
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Welcome to Atya Technologies Pvt. Ltd.");
}

// the loop routine runs over and over again forever:
void loop()
{
  digitalWrite(redpin,HIGH);
  digitalWrite(greenpin,LOW);
  digitalWrite(bluepin,LOW);
  Serial.println("RGB LED : LED turns to red colour");
  Serial.println();
  delay(2000);
  
  digitalWrite(redpin,LOW);
  digitalWrite(greenpin,HIGH);
  digitalWrite(bluepin,LOW);
  Serial.println("RGB LED : LED turns to green colour");
  Serial.println();
  delay(2000);
  
  
  digitalWrite(redpin,LOW);
  digitalWrite(greenpin,LOW);
  digitalWrite(bluepin,HIGH);
  Serial.println("RGB LED : LED turns to blue colour");
  Serial.println();
  delay(2000);

}