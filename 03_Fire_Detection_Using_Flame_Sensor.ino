int flameSensor = 8;
int led = 13;

void setup()
{

    pinMode(flameSensor, INPUT);
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int flame = digitalRead(flameSensor);

    if (flame == LOW)
    {
        digitalWrite(led, HIGH);
        Serial.println("🔥 Flame Detected.");
        Serial.println(flame);
    }
    else
    {
        digitalWrite(led, LOW);
        Serial.println("❌ No Flame Detected.");
        Serial.println(flame);
    }
    delay(500);
}