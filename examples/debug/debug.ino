// debug mode 
#include <SoftwareSerial.h>

#define RX  3
#define TX  2

SoftwareSerial can(RX, TX);

void setup()
{
    Serial.begin(9600);
    can.begin(9600);
}

void loop()
{
    while(Serial.available())
    {
        can.write(Serial.read());
    }
    
    while(can.available())
    {
        Serial.write(can.read());
    }
}

// END FILE