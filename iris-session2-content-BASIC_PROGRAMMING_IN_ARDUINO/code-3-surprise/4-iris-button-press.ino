int count=0;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void blink(int pin){
  	delay(1000);
  	digitalWrite(13,HIGH); 
    delay(1000);
    digitalWrite(13,LOW);
}

void loop()
{
 //Counting number of presses :)
  while(digitalRead(8)){   
	int a=digitalRead(7);
  	Serial.print(a);
  	Serial.print("\n");
    count=count+a;
    delay(1000);
  }
  // printing the count
  Serial.print("Button Pressed : \n");
  Serial.print(count);
  Serial.print("\n");
  delay(10000);
  for(int i=0;i<count;i++){
    Serial.print("Blinking ");
    Serial.print(i+1);
    Serial.print(" Time  \n");
    blink(13);
  }
  delay(10000);
}