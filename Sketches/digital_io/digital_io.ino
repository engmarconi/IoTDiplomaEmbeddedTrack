/* IoT Full-Stack Course
   Embedded systems track
   Ex.2 Digtal I/O example
   By. Eng/Marco M. Kaldas
*/

int LED = D1;  // Digital pin GPIO5
int BTN = D2;  // Digital pin GPIO4

void setup() {
  Serial.begin(115200);
  Serial.println("Example:1 - Blinking LED");
  pinMode(LED, OUTPUT);  // declare LED as output
  pinMode(BTN, INPUT);   // declare BTN as input
}

void loop() {
  int val = digitalRead(BTN);
  digitalWrite(LED, val);
}
