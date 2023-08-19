//Fazendo um LED piscar;
//Ligar LED no digital 13

void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
    //EXECUTO O "S"
    digitalWrite(13, HIGH); //Liga o pino
    delay(1000); //Espera 1 s (está em milisegundos);
    digitalWrite(13, LOW); //Desliga o pino
    delay(1000);
    
    digitalWrite(13, HIGH); 
    delay(1000); 
    digitalWrite(13, LOW); 
    delay(1000);
    
    digitalWrite(13, HIGH); 
    delay(1000); 
    digitalWrite(13, LOW);
    delay(2000);

    //EXECUTA O "O"

    digitalWrite(13, HIGH); //Liga o pino
    delay(4000); //Espera 1 s (está em milisegundos);
    digitalWrite(13, LOW); 
    delay(1000);

    digitalWrite(13, HIGH); //Liga o pino
    delay(4000); //Espera 1 s (está em milisegundos);
    digitalWrite(13, LOW); 
    delay(1000);

    digitalWrite(13, HIGH); //Liga o pino
    delay(4000); //Espera 1 s (está em milisegundos);
    digitalWrite(13, LOW); 
    delay(2000);

    //EXECUTO O "S"
    digitalWrite(13, HIGH); //Liga o pino
    delay(1000); //Espera 1 s (está em milisegundos);
    digitalWrite(13, LOW); //Desliga o pino
    delay(1000);
    
    digitalWrite(13, HIGH); 
    delay(1000); 
    digitalWrite(13, LOW); 
    delay(1000);
    
    digitalWrite(13, HIGH); 
    delay(1000); 
    digitalWrite(13, LOW);
    delay(2000);
    



    

    //digitalWrite(12, HIGH); //Liga o pino
    //delay(1000); //Espera 1 s (está em milisegundos);
    //digitalWrite(12, LOW); //Desliga o pino
    //delay(1000);
}
