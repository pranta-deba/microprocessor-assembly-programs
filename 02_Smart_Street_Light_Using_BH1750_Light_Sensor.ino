#include <Wire.h>
#include <BH1750.h>

BH1750 LightFunction;
void setup()
{
    pinMode(8, OUTPUT);
    Serial.begin(9600);
    Wire.begin();
    LightFunction.begin();
    Serial.println("Initialization successful");
}
void loop()
{
    int lux = LightFunction.readLightLevel();
    Serial.println(lux);
    delay(500);
    if (lux < 20)
    {
        Serial.println("Light On ");
        digitalWrite(8, HIGH);
    }
    else
    {
        Serial.println("Light Off ");
        digitalWrite(8, LOW);
    }
}