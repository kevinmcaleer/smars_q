
#include "Arduino_RouterBridge.h"
#define echoPin 2
#define trigPin 3

long duration;
int distance;

void setup() {
  
  Monitor.begin();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  Serial.println("Ultrasonic Range finder");
}


int ping() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave trvel ime in microseconds
  long startTime = micros();
  while(digitalRead(echoPin)==LOW);
  startTime = micros();
  while(digitalRead(echoPin)==HIGH);
  long endTime = micros();
  duration = endTime - startTime;

  //calculate the distance
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
} 

void loop() {
  Monitor.println("this is a test of monitor");
  ping();
  delay(1000);
}