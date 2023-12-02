#include <LiquidCrystal.h> //INCLUSÃO DE BIBLIOTECA
  
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //PORTAS DO ARDUINO QUE SÃO UTILIZADAS PELO SHIELD KEYPAD DISPLAY LCD
int menu = 1; 
int i = 0;
  
void setup(){  
 lcd.begin(16,2); //SETA A QUANTIDADE DE COLUNAS(16) E O NÚMERO DE LINHAS(2) DO DISPLAY. EM SUMA: UMA MATRIZ DE 16 COLUNAS E 2 LINHAS
 lcd.setCursor(0,0); //SETA A POSIÇÃO EM QUE O CURSOR INCIALIZA(LINHA 1)
 lcd.print ("Menu");
 lcd.setCursor(0,1); //SETA A POSIÇÃO EM QUE O CURSOR INCIALIZA(LINHA 1)
 lcd.print ("1 - CALIBRAR"); 
}  
  
void loop(){  
 lcd.setCursor(0,1); //SETA A POSIÇÃO EM QUE O CURSOR RECEBE O TEXTO A SER MOSTRADO(LINHA 2)

 
 if ((analogRead(0)) < 200) { //SE A LEITURA DO PINO FOR MENOR QUE 200, FAZ
  menu--;
 }
   
 else if ((analogRead(0)) < 400){ //SE A LEITURA DO PINO FOR MENOR QUE 400, FAZ  
  menu++;
 }
 if(menu == 5){
      menu = 1;      
    }
 if(menu == 0){
      menu = 4;
    }


    if(menu == 1){
      lcd.print ("1 - CALIBRAR    ");
      delay(300);
    }
    if(menu == 2){
      lcd.print ("2 - COLETAR     ");
      delay(300);
    }
    if(menu == 3){
      lcd.print ("3 - ENVIAR DADOS");
      delay(300);
    }
    if(menu == 4){
      lcd.print ("4 - FINALIZAR   ");
      delay(300);
    }
     
 }  
  
 
