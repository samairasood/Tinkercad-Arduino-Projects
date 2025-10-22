int tempPin = A0;
int gasPin = A1;

int redLED = 8;
int greenLED = 9;
int buzzer = 10;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int tempValue = analogRead(tempPin);
  float tempC = tempValue * (5.0 / 1023.0) * 100;

  int gasValue = analogRead(gasPin);

  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.print(" C, Gas: ");
  Serial.println(gasValue);

  if (tempC > 30 && gasValue > 400) {
    // Fire condition
    digitalWrite(greenLED, LOW);
    
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    delay(500);
  } else {
    // Normal condition
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(greenLED, HIGH);
  }

  delay(200); // Small delay for stability
}