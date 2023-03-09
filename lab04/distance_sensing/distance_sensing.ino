// These are all global variables.
// I can use this anywhere.
int triggerPin = 8;
int echoPin = A0;
float pulseOffDuration = 2;  // ms
float pulseOnDuration = 10;  // ms
float ms2mm = 343.0 / 2.0 / 1000.0;

void setup() {
    Serial.begin(9600);

    // This specifies INPUT and OUTPUT for pins.
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
    // Do not send any sound waves.
    // This accounts for interference/disturbances.
    digitalWrite(triggerPin, LOW);
    delay(pulseOffDuration);  // This in ms.

    // Start sending sound waves.
    digitalWrite(triggerPin, HIGH);
    delay(pulseOnDuration);

    // This is where we start listening so turn sound waves off.
    digitalWrite(triggerPin, LOW);

    // This is where we read the duration from the sensor.
    float duration = pulseIn(echoPin, HIGH);  // microseconds

    // s = vt
    // Calculating distance from time and velocity.
    float distance = duration * ms2mm;  // mm

    Serial.println(distance);
}