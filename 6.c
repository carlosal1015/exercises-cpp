#include <stdio.h>

/*
Calculo de la fuerza electrica entre dos cargas puntuales de
signo opuesto
F = K*q1*q2/d*d
*/

int main() {
  // declaracion de variables a usar
  double q1, q2, fza, r;
  const double k = 9000000000.0;
  /*
  float : numeros punto flotante de precision simple
  double : numeros punto flotante de precision doble
  */

  // Ingreso/lectura de datos : 2 cargas de signo opuesto y un radio
  // Usamos : printf y scanf

  printf("INgrese la carga negativa \n");
  scanf("%lf", &q1);

  printf("INgrese la carga positiva \n");
  scanf("%lf", &q2);

  printf("INgrese el radio \n");
  scanf("%lf", &r);

  // Calculos :
  fza = k * q1 * q2 / (r * r);

  // salida / output
  printf(" La fza de Coulomb es %lf \n", fza);

  return 666;
}