#include <MPU6050_tockn.h> 
#include <Wire.h>

#define motorFrenteA 5
#define motorTrasA 6
#define spdMotorA 7

#define motorFrenteB 8
#define motorTrasB 9
#define spdMotorB 10

#define acelerar 1
#define parar 0
#define minm 50
#define media 100
#define max 255
#define re 60

#define slD 12
#define slE 13

#define MPU_ADDR 0x68 //Endereço quando o pino A0 estiver no GND

MPU6050 mpu (Wire);
//Declaração de objetos
float angX;
float angY;
float angZ;
unsigned long controlTempo;

void setup() {

  Serial.begin(9600);
  Wire.begin();
  mpu.begin();
  mpu.calcGyroOffsets(false); //Se quiser mostrar as informaçoes coloque true
  
  pinMode(motorFrenteA, OUTPUT);
  pinMode(motorTrasA, OUTPUT);
  pinMode(spdMotorA, OUTPUT);

  pinMode(motorFrenteB, OUTPUT);
  pinMode(motorTrasB, OUTPUT);
  pinMode(spdMotorB, OUTPUT);

  pinMode(slD, INPUT);
  pinMode(slE, INPUT);  

}







void loop() {

  bool estadoSensor1 = digitalRead(slD);
  bool estadoSensor2 = digitalRead(slE);

  mpu.update();

  //Amazena os dados enviados pelo giroscopio
  angX = mpu.getAngleX();
  angY = mpu.getAngleY();
  angZ = mpu.getAngleZ();

  Serial.println(angX);
  Serial.println(angY);
  Serial.println(angZ);

  fl1();

  if(angY <= -25){
    analogWrite(spdMotorA, max);
    digitalWrite(motorFrenteA, acelerar);
    }
  
  else if (angY >= 35){
    analogWrite(spdMotorA, minm);
    digitalWrite(motorFrenteA, acelerar);
  }
  
  else{
    analogWrite(spdMotorA, media);
    digitalWrite(motorFrenteA, acelerar);
    }

}
