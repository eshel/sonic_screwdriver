
const int buzzerPin = 8;
const int ledPin = 13;

void beep(int pin, int d1, int d2) {
	digitalWrite(ledPin, HIGH);		
	analogWrite(pin, 255);

	delay(d1);

	analogWrite(pin, 0);
	digitalWrite(ledPin, LOW);	

	delay(d2);
}

void setup() {
	pinMode(buzzerPin, OUTPUT);
	pinMode(ledPin, OUTPUT);
}

void loop() {
	beep(buzzerPin, 50, 10);
}
