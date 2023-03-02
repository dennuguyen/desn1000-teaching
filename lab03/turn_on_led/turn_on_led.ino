const int ledPin = 13;  // the pin that the LED is attached to
int incomingByte;       // a variable to read incoming serial data into

void setup() {
    // Initialize serial communication:
    Serial.begin(9600);

    // Initialize the LED pin as an output:
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // See if there's incoming serial data:
    if (Serial.available() > 0) {
        // Read the oldest byte in the serial buffer:
        incomingByte = Serial.read();

        // If it's a capital H (ASCII 72), turn on the LED:
        if (incomingByte == 'H') {
            digitalWrite(ledPin, HIGH);
        }

        // If it's an L (ASCII 76) turn off the LED:
        if (incomingByte == 'L') {
            digitalWrite(ledPin, LOW);
        }
    }
}
