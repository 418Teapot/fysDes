// Sound and Light component

// left / right
int right = 10; // højre rød
int left = 9; // venstre blå

int freq = 440;

void setup(){

  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  
}
void loop() 
{

  tone(left, freq, 500);
  delay(500);
  noTone(left);
  tone(right, freq, 500);
  delay(500);
  noTone(right);
  
}
