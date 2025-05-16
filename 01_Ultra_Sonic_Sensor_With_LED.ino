int trig = 8;
int echo = 7;
int led = 4;

void setup()
{
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    digitalWrite(led, HIGH);
    int duration = pulseIn(echo, HIGH);
    int distance = duration * 0.034 / 2;
    Serial.println(distance);
    delay(500);
}