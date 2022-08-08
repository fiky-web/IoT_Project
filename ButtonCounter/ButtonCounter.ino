
#define button 5
int counter = 0;
void setup()
{
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
 int but = digitalRead(button);
  if (but == 1)
  {
  	counter= counter + 1;
	delay(100);
    digitalWrite(button,LOW);
  }
  Serial.print(counter);
  Serial.print("\n");
	
}
