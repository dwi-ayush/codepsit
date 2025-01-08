#include <Wire.h>
#include <LiquidCrystal_I2C>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27, 16 column and 2 rows

// Define pins for TCS3200 RGB sensor
const int S0 = 2;
const int S1 = 3;
const int S2 = 4;
const int S3 = 5;
const int OUT = 6;

// Define pins for ultrasonic sensor
const int trigPin = 7;
const int echoPin = 8;

// Define pins for RGB LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT, INPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  lcd.begin(16, 2);  // Initialize the LCD

  Serial.begin(9600);
}

void loop() {
  // Set RGB sensor to read Red color
  colorSelect(1);
  int redValue = getColorValue();

  // Set RGB sensor to read Green color
  colorSelect(2);
  int greenValue = getColorValue();

  // Set RGB sensor to read Blue color
  colorSelect(3);
  int blueValue = getColorValue();

  // Display RGB values on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("RGB: ");
  lcd.print(redValue);
  lcd.print(", ");
  lcd.print(greenValue);
  lcd.print(", ");
  lcd.print(blueValue);

  // Ultrasonic sensor distance measurement
  float distance = getDistance();

  // Display distance on LCD
  lcd.setCursor(0, 1);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm");

  // Control RGB LED based on color
  controlRGBLED(redValue, greenValue, blueValue);

  delay(1000);
}

void colorSelect(int color) {
  switch (color) {
    case 1:
      digitalWrite(S2, LOW);
      digitalWrite(S3, LOW);
      break;
    case 2:
      digitalWrite(S2, HIGH);
      digitalWrite(S3, HIGH);
      break;
    case 3:
      digitalWrite(S2, LOW);
      digitalWrite(S3, HIGH);
      break;
    default:
      break;
  }
}

int getColorValue() {
  // Read the frequency from the RGB sensor
  return pulseIn(OUT, LOW);
}

float getDistance() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the duration of the echo pulse
  return pulseIn(echoPin, HIGH) * 0.034 / 2;
}

void controlRGBLED(int red, int green, int blue) {
  analogWrite(redPin, map(red, 0, 255, 0, 255));
  analogWrite(greenPin, map(green, 0, 255, 0, 255));
  analogWrite(bluePin, map(blue, 0, 255, 0, 255));
}