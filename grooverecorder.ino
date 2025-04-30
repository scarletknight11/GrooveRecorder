// demo for Grove - Recorder

const int pinButton = 2;
const int pinRec = 7;

void setup()
{
    pinMode(pinButton, INPUT);
    pinMode(pinRec, OUTPUT);
}

void loop()
{
    if(digitalRead(pinButton))      // button pressed
    {
        digitalWrite(pinRec, HIGH);
        delay(200);
        digitalWrite(pinRec, LOW);
        while(digitalRead(pinButton));  // until button release
    }
    delay(10);
}