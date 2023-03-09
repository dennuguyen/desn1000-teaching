int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup() { Serial.begin(9600); }

void loop() {
    int i = 0;
    while (i < 10) {
        Serial.println(arr[i]);
        i++;
    }
}