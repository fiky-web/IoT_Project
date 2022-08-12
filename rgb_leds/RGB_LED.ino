int counter;

void setup(){
	pinMode(11, OUTPUT);
  	pinMode(12, OUTPUT);
  	pinMode(13, OUTPUT);
}

void loop(){
  for(int i = 0 ; i<150;i+=5){
      analogWrite(11, i+50);
      analogWrite(12, i);
      analogWrite(13, i+100);
      delay(150);

    for (int j=0 ; j<150; j+=15){
      analogWrite(11, i+25);
      analogWrite(12, j+105);
      analogWrite(13, i);
      delay(50);
    }

}
}
