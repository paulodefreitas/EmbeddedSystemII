#include <IRremote.h>

const int buttonPin = 2;     // the number of the pushbutton pin

int RECV_PIN = 11; // define input pin on Arduino
IRrecv irrecv(RECV_PIN);
decode_results results; // decode_results class is defined in IRremote.h

IRsend irsend;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay (100); // small delay to prevent reading errors

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    irsend.sendSony(0xa90, 12); // Sony TV power code
  }
}
