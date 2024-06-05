int duration;
int distance;
void setup() {
  pinMode(9, INPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(7, LOW);
  delayMicroseconds(2);
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  digitalWrite(7, LOW);
  Serial.print(distance);
  

 duration = pulseIn(9, HIGH);
 distance = duration * 0.034 / 2;
}
