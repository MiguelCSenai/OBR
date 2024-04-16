void fl1(){
  bool estadoSensor1 = digitalRead(slD);
  bool estadoSensor2 = digitalRead(slE);

   if (estadoSensor1 == HIGH) {

    digitalWrite(motorFrenteA, acelerar);
    digitalWrite(motorTrasA, parar);
    analogWrite(spdMotorA, max);

  }

  else {

    analogWrite(spdMotorA, media);

  }

  if (estadoSensor2 == HIGH) {

    digitalWrite(motorFrenteB, acelerar);
    digitalWrite(motorTrasB, parar);
    analogWrite(spdMotorB, max);

  }
   else {

    analogWrite(spdMotorB, media);

  }

}
