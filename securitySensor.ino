#include <LiquidCrystal.h> 
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // setting up the lcd screen

const int trigPin = 2;
const int echoPin = 3;
const int buzzerPin = 4;

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  lcd.print("Starting");
  delay(1000);
}

void loop() {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measuring the distance it takes to recieve signal back
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print("cm");

  if (distance > 0 && distance < 15) {
    lcd.setCursor(0, 1);
    lcd.print("too close"); // if within 15 
    digitalWrite(buzzerPin, HIGH);
    delay(50);
    digitalWrite(buzzerPin, LOW);
    delay(50);
  } else {
    lcd.setCursor(0, 1);
    lcd.print("Status: Secure");
  }

  delay(100); 
}
