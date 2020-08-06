void setup() {
  // Establecer el pin 10 como salida
  pinMode(10, OUTPUT);
}

void loop() {
  // Encender y apagar un led cada segundo
  digitalWrite(10, HIGH);   //Enciende el led
  delay(1000);   //1 Segundo
  digitalWrite(10, LOW);   //Apagar el led
  delay(1000);
}
