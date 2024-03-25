const int speakerPin = 8;  

void setup() {
  Serial3.begin(115200); 
  pinMode(speakerPin, OUTPUT);  
}

void loop() {
  int sensorValue = analogRead(A1); 
  float voltage = sensorValue * (5.0 / 1024.0); 
  Serial3.println(voltage); 

  if (voltage < 1.3) {
   
    tone(speakerPin, 1000); 
    delay(200);  
    noTone(speakerPin);  
  }

  delay(500); 
}
