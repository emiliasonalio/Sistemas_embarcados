
const int ledPin1 =  13;// the number of the LED pin
int ledState1 = LOW;             // ledState used to set the LED
unsigned long previousMillis1 = 0;        // will store last time LED was updated
long interval1 = 1000;           // interval at which to blink (milliseconds)

const int ledPin2 =  12;// the number of the LED pin
int ledState2 = LOW;             // ledState used to set the LED
long interval2 = 5000;           // interval at which to blink (milliseconds)
unsigned long previousMillis2 = 0;        // will store last time LED was updated

const int ledPin3 =  11;// the number of the LED pin
int ledState3 = LOW;             // ledState used to set the LED
long interval3 = 500;           // interval at which to blink (milliseconds)
unsigned long previousMillis3 = 0;        // will store last time LED was updated

void setup() {

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  interval1 = analogRead(A0)*1;
  interval2 = analogRead(A0)*2;
  interval3 = analogRead(A0)*3;

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis1 >= interval1) {
    previousMillis1 = currentMillis;

    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }

    digitalWrite(ledPin1, ledState1);
  }
    if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;

    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    digitalWrite(ledPin2, ledState2);
  }

    if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;

    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }

    digitalWrite(ledPin3, ledState3);
  }
}
