void setup()
{
  for (int i = 0; i <= 13; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
}

void loop()
{

  for (int i = 0; i <= 13; i++)
  {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }

  digitalWrite(A0, HIGH);
  delay(50);
  digitalWrite(A0, LOW);

  digitalWrite(A1, HIGH);
  delay(50);
  digitalWrite(A1, LOW);

  digitalWrite(A1, HIGH);
  delay(50);
  digitalWrite(A1, LOW);

  digitalWrite(A0, HIGH);
  delay(50);
  digitalWrite(A0, LOW);

  for (int i = 13; i >= 0; i--)
  {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }
}