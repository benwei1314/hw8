void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(250); // Wait for 250 millisecond(s)
}
