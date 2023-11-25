#include <LiquidCrystal.h> //INCLUSÃO DE BIBLIOTECA
  
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //PORTAS DO ARDUINO QUE SÃO UTILIZADAS PELO SHIELD KEYPAD DISPLAY LCD

int lados = 6;
int aux;

  
void setup(){  
 lcd.begin(16,2); //SETA A QUANTIDADE DE COLUNAS(16) E O NÚMERO DE LINHAS(2) DO DISPLAY. EM SUMA: UMA MATRIZ DE 16 COLUNAS E 2 LINHAS
 lcd.setCursor(0,0); //SETA A POSIÇÃO EM QUE O CURSOR INCIALIZA(LINHA 1) 
 lcd.print("DADO"); //ESCREVE A FRASE "APERTOU A TECLA" NA PRIMEIRA LINHA DO DISPLAY LCD  
}  
  
void loop(){  
 lcd.setCursor(0,1); //SETA A POSIÇÃO EM QUE O CURSOR RECEBE O TEXTO A SER MOSTRADO(LINHA 2)
 lcd.print (       lados       );  //ESCREVE NO LCD O TEXTO
 lcd.print ("    ");
 if ((analogRead(0)) < 80) { //SE A LEITURA DO PINO FOR MENOR QUE 80, FAZ
  aux = random(1,lados);
  lcd.print(aux);
  lcd.print ("            ");
  delay(500);
  
 //   lcd.print ("    DIREITA    "); //ESCREVE NO LCD O TEXTO 
 }  
 else if ((analogRead(0)) < 200) { //SE A LEITURA DO PINO FOR MENOR QUE 200, FAZ  
  lados = lados + 1;
  delay(500);
  //lcd.print (       aux        );  //ESCREVE NO LCD O TEXTO
 }  
 else if ((analogRead(0)) < 400){ //SE A LEITURA DO PINO FOR MENOR QUE 400, FAZ
  lados = lados - 1;
  delay(500);  
  //lcd.print (       aux        ); //ESCREVE NO LCD O TEXTO 
 }  
 else if ((analogRead(0)) < 600){ //SE A LEITURA DO PINO FOR MENOR QUE 600, FAZ  
 // lcd.print ("    Emilia   "); //ESCREVE NO LCD O TEXTO 
 }  
 else if ((analogRead(0)) < 800){ //SE A LEITURA DO PINO FOR MENOR QUE 800, FAZ 
  //lcd.print ("     SELECT    "); //ESCREVE NO LCD O TEXTO 
 }  
}
