void setup() {
  pinMode(11, OUTPUT);                        
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}
void loop() {
  digitalWrite(11, HIGH);
  delay(6000);
  digitalWrite(11, LOW);
  
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(6000);
  digitalWrite(9, LOW);

}
