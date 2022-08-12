int sensorVal = 0;

void setup()
{
pinMode(A0, INPUT);
pinMode(9, OUTPUT);
}

void loop()
{
	sensorVal = analogRead(A0);
  	digitalWrite(9,1);
  	delay(sensorVal);
  	digitalWrite(9,0);
  	delay(sensorVal);
  
}
