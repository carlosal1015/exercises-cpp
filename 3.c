#include <math.h>
#include <stdio.h>

// Variable globales

// Definamos una funcion sencilla
void prueba1Cl2() { int x = 2; }

float prueba2Cl2() { return 3.14159; }

void prueba3Cl2() { printf("Esto es una funcion de tipo void"); }

void main() {
  /*
  void sirve para especificar que un funcion retorna nada
  */

  // Ejecutemos la funcion prueba1Cl2
  prueba1Cl2();

  // Ejecutemos la funcion prueba2Cl2
  float PI;
  PI = prueba2Cl2();

  // LLamemos/ejecutemos a prueba3Cl2
  prueba3Cl2();
}
