int a;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
 
  Serial.print("Hello World! -> ");
  a = analogRead(A0); //pode mudar para digital com o comando digitalRead(A0);
  a = map(a, 0, 1023, 0, 100); //limita de 0 a 100. Ele mudou a escala do valor;
  Serial.println(a);
  delay(2000);

  
}
