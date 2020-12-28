

const int time_of_delay =1000;

void setup()
{
   for(int i=3; i<=12; i++) 
   pinMode(i,OUTPUT);
}

void loop(){

   
   //pat1();
   //pat2();
   pat3();
}
  
void pat1(){ 
    for(int i=3; i<=12; i++) {
      digitalWrite(i,HIGH);
      
      delay(time_of_delay);
      digitalWrite(i,LOW);
 		
    }
    
    for(int i=11; i>=4; i--) {
      digitalWrite(i,HIGH);
      delay(time_of_delay);
      digitalWrite(i,LOW);
    }
}

void pat2(){
  	int i=3;
    while(i<13){
      if(i%2==0){
        for(int j=13-i;j>0;j--){
          digitalWrite(i,HIGH);
          delay(1000);
          digitalWrite(i,LOW);
          delay(1000);
        }
      }
      else{
          digitalWrite(i,HIGH);
          delay(1000);
          digitalWrite(i,LOW);
          delay(1000);
      }
      i++;
    }
}  

void pat3(){
  	int a,b;      
    for(int i=11; i>=4; i--) {
      a=i;
      b=a<<4;
      a=b>>1;
      i=(b>>3)/2;
      i=a/8;
      digitalWrite(i,HIGH);
      digitalWrite(i-1,HIGH);
      a=a*2;
      b=b>>2;
      digitalWrite(i+1,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(i-1,LOW);
      digitalWrite(i+1,LOW);
    }
}

