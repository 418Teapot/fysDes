#include <IRremote.h>
#include <IRremoteInt.h>



// Sound and Light component

// left / right
int right = 10; // højre rød
int left = 9; // venstre blå

// led right 
int IR_right = 15;
int IR_left = 6 ;

IRrecv irrecvR(IR_right);
IRrecv irrecvL(IR_left);

decode_results resultsR;
decode_results resultsL;

int freq = 440;
int downTime = 500;

void setup(){
  Serial.begin(9600);
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  
  irrecvR.enableIRIn();
  irrecvL.enableIRIn();
  
  
}
void loop() 
{
  
  if(irrecvR.decode(&resultsR)){
     rightHit(); 
     
     irrecvR.resume();
  }
  
  if(irrecvL.decode(&resultsL)){
    leftHit();
    
    irrecvL.resume();
  }
  
  
  
}

void leftHit(){
   tone(left, freq, downTime);
   delay(downTime);
   noTone(left);
      tone(left, freq, downTime);
   delay(downTime);
   noTone(left);
      tone(left, freq, downTime);
   delay(downTime);
   noTone(left);  
}

void rightHit() {
   tone(right, freq, downTime);
   delay(downTime);
   noTone(right);
      tone(right, freq, downTime);
   delay(downTime);
   noTone(right);
      tone(right, freq, downTime);
   delay(downTime);
   noTone(right);
}
