#define motorFrenteA 41 //cinza -
#define motorTrasA 40 //azul
#define spdMotorA 3 //roxo

#define motorFrenteB 31 //cinza
#define motorTrasB 30 //azul
#define spdMotorB 2 //roxo

#define sensRefletA 10 //verde direita
#define sensRefletB 11 //verde esquerda

#define trigFrente 53 //laranja
#define echoFrente 52 //marrom

#define trigDireita 51 //laranja
#define echoDireita 50 //marrom

#define trigEsquerda 49 //laranja
#define echoEsquerda 48 //marrom

void setup() {
  pinMode(motorFrenteA, OUTPUT);
  pinMode(motorTrasA, OUTPUT);
  pinMode(spdMotorA, OUTPUT);
  
  pinMode(motorFrenteB, OUTPUT);
  pinMode(motorTrasB, OUTPUT);
  pinMode(spdMotorB, OUTPUT);
  ]
  pinMode(trigFrente, OUTPUT);
  pinMode(echoFrente, INPUT); 

  pinMode(trigDireita, OUTPUT);
  pinMode(echoDireita, INPUT);
  
  pinMode(trigEsquerda, OUTPUT);
  pinMode(echoEsquerda, INPUT);
  
  pinMode(sensRefletA, INPUT);
  pinMode(sensRefletB, INPUT);
}

void MotorAVMaxFrente(){

  digitalWrite(motorFrenteA, HIGH);
  digitalWrite(motorTrasA, LOW);
  analogWrite(spdMotorA, 255);
  
}

void MotorBVMaxFrente(){

  digitalWrite(motorFrenteB, HIGH);
  digitalWrite(motorTrasB, LOW);
  analogWrite(spdMotorB, 255);
  
}

void MotorAVMedFrente(){

  digitalWrite(motorFrenteA, HIGH);
  digitalWrite(motorTrasA, LOW);
  analogWrite(spdMotorA, 150);
  
}

void MotorBVMedFrente(){

  digitalWrite(motorFrenteB, HIGH);
  digitalWrite(motorTrasB, LOW);
  analogWrite(spdMotorB, 150);
  
}

void loop() {

bool segueLinhaA = digitalRead(sensRefletA);
bool segueLinhaB = digitalRead(sensRefletB);
  
if(segueLinhaA == true){

  MotorBVMaxFrente();
    
}
else{

  MotorBVMedFrente();
    
}

if(segueLinhaB == true){

  MotorAVMaxFrente();
    
}
else{

  MotorAVMedFrente();
    
}

    
}
