const int trigPin = 9;
const int echoPin = 10;
const int Motor = 2;
const int buzzer = 13;
long duration;
int distance;
int safetyDistance;

void setup()
{
    pinMode(buzzer, OUTPUT);
    pinMode(Motor, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
dos();
}
void dos()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);

    distance = duration * 0.034 / 2;

    safetyDistance = distance;
    if (safetyDistance <= 5)
    {
        digitalWrite(buzzer, HIGH);
        digitalWrite(Motor, HIGH);
    }
    else
    {
        digitalWrite(buzzer, LOW);
        digitalWrite(Motor, LOW);
    }

    Serial.print("Distance: ");
    Serial.println(distance);
}
