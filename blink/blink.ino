


int blinkPin = 0;
long counter = 0;

void setup()
{
  pinMode(blinkPin, OUTPUT);

  digitalWrite(blinkPin, LOW);
  delay(5000);
  digitalWrite(blinkPin, HIGH);
}

void loop()
{
  if(counter < 1000000) {
    // start counting...
    counter = counter + 1;
  } else {
    digitalWrite(blinkPin, LOW);
    delay(500);
    digitalWrite(blinkPin, HIGH);
    delay(500);
  }  
}

