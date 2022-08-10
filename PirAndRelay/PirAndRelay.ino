#define SensorPir 6
#define SensorLED 12
int PIRState = 0;

void setup(){
	pinMode(SensorPir, INPUT);
	pinMode(SensorLED, OUTPUT);
	Serial.begin(9600);
}

void loop(){
	
	PIRState = digitalRead(SensorPir);

	if (PIRState == 1){
	
	digitalWrite(SensorLED,1);
	delay(100);
	Serial.print(digitalRead(SensorLED);
	
	}

}
