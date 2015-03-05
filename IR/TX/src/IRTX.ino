/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() {

	while(!Serial.available());
	char rx=Serial.read();
	unsigned int rx_int=(unsigned int)rx;

	Serial.print("Sending ");
	Serial.println(rx);
	irsend.sendSony(rx_int,32); //8 bits
	//irsend.sendRaw(&rx,1,36);

}
