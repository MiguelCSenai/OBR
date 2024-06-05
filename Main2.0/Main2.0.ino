//Velocidade
#define spdA 2
#define spdB 5

//Mover para frente
#define frenteA 3
#define frenteB 6

//Mover para tras
#define trasA 4
#define trasB 7

//Potencias
#define minm 30
#define media 100
#define maxm 245

int velocidadeMotor(int Velocidade){

  analogWrite(spdA, Velocidade);
  analogWrite(spdB, Velocidade);
  
}

void setup() {

    pinMode(spdA, OUTPUT);
    pinMode(spdB, OUTPUT);
    
    pinMode(frenteA, OUTPUT);
    pinMode(frenteB, OUTPUT);
    
    pinMode(trasA, OUTPUT);
    pinMode(trasB, OUTPUT);

    digitalWrite(frenteA, HIGH);
    digitalWrite(frenteB, HIGH);
    
}

void loop() {

  velocidadeMotor(minm);
  delay(1500);
  velocidadeMotor(media);
  delay(1500);
  velocidadeMotor(maxm);
  delay(1500);
  
}
