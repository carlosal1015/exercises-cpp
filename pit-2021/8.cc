/*
Programe en C++
Solicite un numero entero de 1 a 10 y muestre su tabla de multiplicar
*/

#include <iostream>

int main() {
  int numero, rango;

  do {
    std::cout << "Diga el rango [1, rango]: ";

    std::cin >> rango;

    std::cout << "Diga el n'umero a multiplicar de 1 hasta "
              << rango
              << ": ";

    std::cin >> numero;
  } while (numero < 1 || numero > rango);

  for (int i = 1; i <= rango; i++) {
    std::cout << numero
              << " * "
              << i
              << " = "
              << numero * i
              << std::endl;
  }

  return 10;
}