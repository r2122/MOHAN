// C++ code
//
void setup()
{
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(0, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(0, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
}