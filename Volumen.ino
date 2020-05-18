//Declaración de variables
int estado=0;
int amarillo=6, verde=5, azul=3;
int brillo;

void setup() {
  //Pin de entrada 11 del BOTÓN
  pinMode(11,INPUT);
  //Pin de salida 4 del LED VERDE
  pinMode(verde,OUTPUT); 
  //Pin de salida 2 del LED AMARILLO
  pinMode(amarillo,OUTPUT); 
  //Pin de salida 2 del LED AZUL
  pinMode(azul,OUTPUT); 
}

//Al presionar aumenta la INTENSIDAD de la luz y al soltar se detiene
void loop() {
  //Leemos el estado del botón
  estado=digitalRead(11);

  //Aumenta progresivamente el brillo en 5 unidades al presionar
  //Encendido progesivo
  //Encendido del PRIMER LED
  if(estado==HIGH){
    brillo=0;
    do{
      analogWrite(amarillo,brillo);
      delay(100);
      brillo+=5;
    } while(brillo<=250);
  }
  //Encendido del SEGUNDO LED
  if(estado==HIGH){
    brillo=0;
    do{
      analogWrite(verde,brillo);
      delay(100);
      brillo+=5;
    } while(brillo<=250);
  }
  //Encendido del TERCER LED
  if(estado==HIGH){
    brillo=0;
    do{
      analogWrite(azul,brillo);
      delay(100);
      brillo+=5;
    } while(brillo<=250);
  }

  //Disminuye progresivamente el brillo en 5 unidades al presionar
  //Apagado del TERCER LED
  if(estado==HIGH){
    brillo=250;
    do{
      analogWrite(azul,brillo);
      delay(100);
      brillo-=5;
    } while(brillo>=0);
  }
  //Apagado del SEGUNDO LED 
  if(estado==HIGH){
    brillo=250;
    do{
      analogWrite(amarillo,brillo);
      delay(100);
      brillo-=5;
    } while(brillo>=0);
  }
  //Apagado del PRIMER LED
  if(estado==HIGH){
    brillo=250;
    do{
      analogWrite(verde,brillo);
      delay(100);
      brillo-=5;
    } while(brillo>=0);
  }
  delay(100);
}
