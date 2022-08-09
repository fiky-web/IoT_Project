void setup()
{
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000); 
  digitalWrite(2, LOW);
  
  digitalWrite(5, HIGH);
  delay(200); 
  digitalWrite(5, LOW);
  
  digitalWrite(8, HIGH);
  delay(1500);
  digitalWrite(8, LOW);
}
