//TX_RX_LED_INIT;
//TXLED0;
//TXLED1;
//RXLED0;
//RXLED1;

static unsigned int output=9;
static unsigned int input=8;


void setup()
{
    TX_RX_LED_INIT;
    pinMode(output,OUTPUT);
    pinMode(input,INPUT_PULLUP);
    digitalWrite(output,LOW);
}

void loop()
{
    if(!digitalRead(input)) TXLED1;
    else TXLED0;
}
