void setup() {
    // Initialize the serial communications
    Serial.begin(9600);
}

void loop() {
    // Say hello to the world
    Serial.println("Hello World");

    // Wait one second and do it again
    delay(1000);
}
