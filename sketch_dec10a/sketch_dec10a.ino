String mySt="";
boolean stringComplete = false;
void setup() {
Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        mySt = Serial.readStringUntil('\n');
        Serial.print("Hello world from Maksym Prostakov\n");
    }
    mySt = "";
}

