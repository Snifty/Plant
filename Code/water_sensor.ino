    const int VAL_PROBE = 0; // Analog pin 0
    const int MOISTURE_LEVEL = 50; // the value after the LED goes ON
    const int PUMP = 8;
    
    void setup() {
        Serial.begin(9600);
        pinMode(PUMP, OUTPUT);
    }
     
    void loop() {
        int moistureMap = map(analogRead(VAL_PROBE), 1023, 0, 0, 100);
        Serial.print(moistureMap);
        Serial.println("%");
     
        if(moistureMap < MOISTURE_LEVEL) {
            digitalWrite(PUMP,HIGH);
        }else{
            digitalWrite(PUMP,LOW);
        }
        delay(500);
    }
