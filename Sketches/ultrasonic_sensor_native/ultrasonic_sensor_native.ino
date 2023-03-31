/* IoT Full-Stack Course
   Embedded systems track
   Ultrasonic Distance Sensor - Native
   By. Eng/Marco M. Kaldas
*/

int trigPin = D5;
int echoPin = D6;
float durationInUs, distanceInCm;
void setup() {
  Serial.begin(119200);
  Serial.println("Ultrasonic Distance Sensor - Native");
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  durationInUs = pulseIn(echoPin, HIGH);
  distanceInCm = (0.034 * durationInUs) / 2.0;
  Serial.print("Distance: ");
  Serial.print(distanceInCm);
  Serial.println(" cm");
  delay(1000);
}
