void setup() { Serial.begin(9600); }

void loop() {
    if (Serial.available() > 0) {
        int num = Serial.read();
        num = num + 1;
        Serial.println(num);
    }
    delay(100);
}