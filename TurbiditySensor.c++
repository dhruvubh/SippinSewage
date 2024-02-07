const int speakerPin = 8;  // Define the pin connected to the speaker

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bps
  pinMode(speakerPin, OUTPUT);  // Set the speaker pin as an output
}

void loop() {
  int sensorValue = analogRead(A0); // Read analog value from pin A0
  float voltage = sensorValue * (5.0 / 1024.0); // Convert analog reading to voltage
  Serial.println(voltage); // Print the voltage to the Serial Monitor

  if (voltage < 1.3) {
    // If voltage is less than 1.3V, activate the speaker to produce a beep
    tone(speakerPin, 1000);  // You can adjust the frequency as needed
    delay(200);  // Beep duration (milliseconds)
    noTone(speakerPin);  // Turn off the speaker
  }

  delay(500); // Delay for 500 milliseconds
}
