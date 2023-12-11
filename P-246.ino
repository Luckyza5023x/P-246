
#define POTENTIOMETER_PIN 15


void setup() {
Serial.begin(9600);
}

void loop() {
int analogValue = analogRead(POTENTIOMETER_PIN);
int brightness = map(analogValue,0,4095,0,255);
ledcWrite(0, brightness);

Serial.println(brightness);
delay(30);

}
