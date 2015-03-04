#include <Arduino.h>
#include <IRremote.h>
void setup();
void loop();
#line 1 "src/IRTX.ino"
/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

//#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() {

	while(!Serial.available());

	unsigned int rx=Serial.read();

	Serial.print("Sending ");
	Serial.println(char(rx));
	irsend.sendSony(rx,8);
	//irsend.sendRaw(&rx,1,36);

}
