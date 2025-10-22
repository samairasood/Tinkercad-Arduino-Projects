int red=8;
int blue=7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
}