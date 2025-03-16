int level;
const int analog_0 = 0;
int l1 = 13;
int l2 = 12;
int l3 = 11;
int l4 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  level = analogRead(analog_0);
  Serial.println(level);

  if (level > 340 && level < 400) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(10, LOW);
  }
  else if (level > 410 && level < 490) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    digitalWrite(10, LOW);
  }
  else if (level > 500 && level < 550) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, HIGH);
    digitalWrite(10, HIGH);
  }
}
