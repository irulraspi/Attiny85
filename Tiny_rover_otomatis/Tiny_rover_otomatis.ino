

// the setup function runs once when you press reset or power the board
void setup() {
  // inisialisasi pin untuk Tiny85
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  }
