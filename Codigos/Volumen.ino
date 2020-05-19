//Declaración de variables
int estado=0;
int amarillo=6, azul=5, verde=3;
int brillo;

void setup() {
  //Pin de entrada 11 del BOTÓN
  pinMode(11,INPUT);
  //Pin de salida 6 del LED VERDE
  pinMode(amarillo,OUTPUT); 
  //Pin de salida 5 del LED AMARILLO
  pinMode(azul,OUTPUT);
  //Pin de salida 3 del LED AZUL
  pinMode(verde,OUTPUT);
}

//Al presionar aumenta la INTENSIDAD de la luz y al soltar se detiene
void loop() {
  //Leemos el estado del botón
  estado=digitalRead(11);
  delay(20);

  //Aumento de brillo en 5 unidades al presionar
  if(estado==HIGH){
    //Enciende el PRIMER LED
    for(brillo=0; brillo<=250; brillo+=2){
      estado=digitalRead(11); //Lee el estado
      if(estado==HIGH){
        //Detiene el ciclo en caso de que no se presione el botón
        analogWrite(amarillo,brillo); 
      }
      delay(50);
    }    
    //Enciende el SEGUNDO LED
    for(brillo=0; brillo<=250; brillo+=2){
       estado=digitalRead(11);
       if(estado==HIGH){
        analogWrite(azul,brillo);
       }
       delay(50);
    }
    //Enciende el TERCER LED
    for(brillo=0; brillo<=250; brillo+=2){
       estado=digitalRead(11);
       if(estado==HIGH){
        analogWrite(verde,brillo);
       }
       delay(50);
    }
  }
    //Incia al acabar con los 3 ciclo anteriores
    //Disminuye de brillo en 5 unidades al presionar
    //Apaga el PRIMER LED
   if(estado==HIGH){
    for(brillo=250; brillo>=0; brillo-=2){
      estado=digitalRead(11);
      if(estado==HIGH){
        analogWrite(verde,brillo); 
      }
      delay(50);
    }
    //Apaga el SEGUNDO LED
    for(brillo=250; brillo>=0; brillo-=2){
       estado=digitalRead(11);
       if(estado==HIGH){
        analogWrite(azul,brillo);
       }
       delay(50);
    }
  
    //Apaga el TERCER LED
    for(brillo=250; brillo>=0; brillo-=2){
      estado=digitalRead(11);
      if(estado==HIGH){
        analogWrite(amarillo,brillo);
      }
      delay(50);
    }
  }
}
