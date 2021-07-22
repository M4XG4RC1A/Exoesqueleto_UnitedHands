//Incluir Librerias que se vayan a usar   //Include Libraries to use

#include <Servo.h>  //Ejemplo Servo  //Example Sevo

int Cont = 0;  //Variable de Control  //Control Variable

Servo S1, S2;  //Ejemplo Iniciar 2 Servos  //Example Start 2 Servos
void setup() {
  //Iniciar las partes correspondientes al actuador lineal y motor  //Start Actuator and sensor parts
  pinMode(2,INPUT);  //Ejemplo Iniciar Boton  //Example Start Button
}

void loop() {
  //Programa  //Program
  if (digitalRead(2)){  //Condicion para activar  //Start Condition
  //Activar Uno y Desactivar Otro Controlador  //Activate and Desactivate the controlers
  S1.write(Cont);
  S2.write(Cont);
  Cont = 180-Cont;
  delay(2000):
  }
}
