int data[100];
int readPin = A0;

void setup() {
    Serial.begin(9600);
    pinMode(readPin, INPUT);
}

void loop() {
    for (int i = 0; i < 100; i++) {
        data[i] = analogRead(readPin);
        delay(1);  // ms
    }

    for (int i = 0; i < 100; i++) {
        Serial.println(data[i]);

        // Play around with print and println to get that output.
    }

    while (1) {
    }  // Infinite loop just to stop your program
}