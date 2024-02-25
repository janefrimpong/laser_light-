const int laserPin = 9; // The digital pin connected to the laser diode

void setup() {
  pinMode(laserPin, OUTPUT); // Set the laser pin as an output
}

void loop() {
  // Turn on the laser at varying intensities using PWM
  for (int intensity = 0; intensity <= 255; intensity++) {
    analogWrite(laserPin, intensity); // Set the laser intensity
    delay(10); // Delay to observe the changes
  }
  
  // Turn off the laser
  analogWrite(laserPin, 0);
  
  delay(1000); // Wait for a second before starting the loop again
}
