int brillo;
int led=5;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  //Aumenta progresivamente el brillo en 2 unidades
  for(brillo=0; brillo<=250; brillo+=2){
    analogWrite(led,brillo);
    delay(20);
  }
  
  //Disminuye progresivamente el brillo de a 5 unidades
  for(brillo=250; brillo>=0; brillo-=2){
    analogWrite(led,brillo);
    delay(20);
  }
}
