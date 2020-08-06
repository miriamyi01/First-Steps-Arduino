//Declaración de variables
int estado = 0;
int estadoAnterior = 0;
int salida = 0;

void setup() {
  //Pin de entrada 8 del BOTÓN
  pinMode(8, INPUT);
  //Pin de salida 4 del LED VERDE
  pinMode(4, OUTPUT);
}

void loop() {
  //Leemos el estado del botón
  estado = digitalRead(8);

  //Se aprieta el botón
  if((estado == HIGH) && (estadoAnterior == LOW)){
      salida=1-salida;
      delay(20);
  }
  
  //Pasar el estado (actual) al estadoAnterior
  estadoAnterior = estado;
  
  if(salida == 1){
     digitalWrite(4,HIGH);
  }
  else{
     digitalWrite(4, LOW);
  }
}
