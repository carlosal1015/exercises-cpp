#include <stdio.h>

/*
Dado el radio de una esfera. Calcular su volumen
*/

// Definamos una constante global para pi
#define CONST_PI 3.14159

/*
para el ingreso de datos : scanf
para la salida de datos : printf
*/

int main() {

  float radio, volumen;

  printf("Calculo del volumen de una esfera \n");
  //  \n : indica un  salto de linea

  // Proceso de lectura : INgreso de datos por parte del usuario (usa elteclado)
  printf(" Ingrese el radio ");
  scanf("%f", &radio);
  /*
  scanf :
  1er argumento : especifica el tipo de dato que el usuario va ingresar
  2do argumento : especifica la posicion de memoria donde se va almacenar
  la variable (leida de teclado)
  */

  // Operaciones matematicas
  volumen = (4.0 / 3.0) * CONST_PI * radio * radio * radio;

  // Proceso de escritura : mostrar los resultados
  printf("El valor de la variable radio es %f \n", radio);
  printf("El volumen es %f \n", volumen);

  return 666;
}
