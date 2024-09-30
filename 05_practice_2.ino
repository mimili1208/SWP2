#define PIN_LED 7
int count = 0;
boolean toggle = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port.
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  // put your main code here, to run repeatedly.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000); // wait for 1,000 milliseconds.

  while (count < 10) {
    toggle = !toggle;
    digitalWrite(PIN_LED, toggle); // update LED status.
    delay(100); // wait for 1,00 milliseconds.
    Serial.println(++count);
  }

  toggle = !toggle;
  digitalWrite(PIN_LED, toggle); // update LED status.
    
  while(1) {} // infinite loop
}
