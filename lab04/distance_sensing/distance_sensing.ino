int triggerPin = 8;
int echoPin = A0;
float pulseOffDuration = 2;  // ms
float pulseOnDuration = 10;  // ms
float ms2mm = 343.0 / 2.0 / 1000.0;

void setup() {
    Serial.begin(9600);
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
    digitalWrite(triggerPin, LOW);
    delay(pulseOffDuration);
    digitalWrite(triggerPin, HIGH);
    delay(pulseOnDuration);
    digitalWrite(triggerPin, LOW);
    noInterrupts();
    float duration = pulseIn(echoPin, HIGH);  // microseconds
    interrupts();
    float distance = duration * ms2mm;
    Serial.println(distance);
}