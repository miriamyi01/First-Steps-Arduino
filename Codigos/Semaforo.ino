  //LEDS y sus pines
  int Verde = 9; 
  int Amarillo = 10;
  int Rojo = 11;
  
void setup(){
  // Establecer los pines como salida
  pinMode(Verde, OUTPUT); 
  pinMode(Amarillo, OUTPUT);
  pinMode(Rojo, OUTPUT);
}

void loop(){
  digitalWrite(Verde, HIGH); //Enciende el led VERDE
  delay(2000); //2 Segundos
  digitalWrite(Verde, LOW); //Apagar el led
  digitalWrite(Amarillo, HIGH); //Enciende el led AMARILLO
  delay(1000); //1 Segundo
  digitalWrite(Amarillo, LOW); //Apagar el led
  digitalWrite(Rojo, HIGH); //Enciende el led ROJO-
  delay(2000); //2 Segundos
  digitalWrite(Rojo, LOW); //Apagar el led
}
