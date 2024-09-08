// Define the pins for the RGB LED
int redPin = 9;
int YellowPin = 10;

void setup() {
  // Set the RGB pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(YellowPin, OUTPUT);
}

void loop() {
  // Red
  setColor(255, 0);
  delay(1000);

  // Green
  setColor(0, 255);
  delay(1000);
}

// Function to set the color of the RGB LED
void setColor(int red, int yellow) {
  analogWrite(redPin, red);
  analogWrite(YellowPin, yellow);
}
