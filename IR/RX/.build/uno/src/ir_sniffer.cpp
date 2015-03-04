#include <Arduino.h>
#include <IRremote.h>
void setup();
void loop();
#line 1 "src/ir_sniffer.ino"
/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */
//#include <IRremote.h>

int RECV_PIN = 4;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{

  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
  //	if (irrecv.decodeSony(&results)) {
    //Serial.println(results.value, HEX);
    Serial.println(char(results.value),BIN);
    irrecv.resume(); // Receive the next value
  }
}
