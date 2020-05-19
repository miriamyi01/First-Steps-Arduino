//Declaración de variables
int estado = 0;
int estadoAnterior = 0;
int salida = 0;

void setup() {
  //Pin de entrada 8 del BOTÓN
  pinMode(8, INPUT);
  //Pin de salida 4 del LED VERDE
  pinMode(4, OUTPUT); 
  //Pin de salida 2 del LED AMARILLO
  pinMode(2, OUTPUT); 
}

void loop() {
  //Leemos el estado del botón
  estado = digitalRead(8);

  //Se aprieta el botón
  if((estado == HIGH) && (estadoAnterior == LOW)){
      salida=1+salida;
      delay(20);
  }
  
  //Pasar el estado (actual) al estadoAnterior
  estadoAnterior = estado;
  //Primer toque
  if(salida == 1){
      digitalWrite(2,HIGH);
  }
  //Segundo toque
  if(salida == 2){
      digitalWrite(2,LOW);
      digitalWrite(4,HIGH);
  }
  //Tercer toque
  if(salida == 3){
      digitalWrite(4,HIGH);
      digitalWrite(2,HIGH);
  }
  //Cuarto toque
  if(salida == 4){
      digitalWrite(4,LOW);
      digitalWrite(2,LOW);
      salida=0; //Vuelve a inciar el ciclo
  }
}
