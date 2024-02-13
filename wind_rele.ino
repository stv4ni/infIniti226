#define WIND 16

void setup() {
  // пины реле на выход
  pinMode(WIND, OUTPUT);
  pinMode(17, OUTPUT);
  digitalWrite(17, LOW);

}

void loop() {

  digitalWrite(WIND, HIGH);
  delay(1000);
  digitalWrite(WIND, LOW);
  delay(1000);
}