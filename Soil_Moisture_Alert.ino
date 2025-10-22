int soilPin = A1;
int buzzerPin = 10;
int threshold = 500;
void setup()
{
pinMode(buzzerPin, OUTPUT);
Serial.begin(9600);
}
void loop()
{
int soilValue = analogRead(soilPin);
Serial.println(soilValue);
if (soilValue < threshold)
{
digitalWrite(buzzerPin, HIGH);
}
else
{
digitalWrite(buzzerPin, LOW);
}
  delay(500);
}