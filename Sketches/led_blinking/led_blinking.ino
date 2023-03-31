/* IoT Full-Stack Course
   Embedded systems track
   Ex.1 Blinking
   By. Eng/Marco M. Kaldas
*/

int LED = D1;  // Digital pin GPIO5

void setup() {
  Serial.begin(115200);
  Serial.println("Example:1 - Blinking LED");
  pinMode(LED, OUTPUT);  // declare LED as output
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
