/*
Leamos 3 numeros del usuario. Despues leer un cuarto numero e indicar
si el numero coincide con algunos de los ingresados con anterioridad
*/
#include <iostream>

int main() {
  int n1, n2, n3, n4;

  std::cout << " Ingrese 3 numeros enteros: ";
  
  // Ingresemos los 3 numeros con un unico std::cin
  std::cin >> n1 >> n2 >> n3;

  std::cout << "Ingrese un numero entero ";
  
  // Ingresemos el 4to numero
  std::cin >> n4;

  // Usemos una estructura if
  if ((n1 == n4) || (n2 == n4) || (n3 == n4))
  {
    std::cout << "El cuarto numero "
              << n4
              << " coincide con uno de los anteriores "
              << std::endl;
  }
  else
  {
    std::cout << "El cuarto numero "
              << n4
              << "no coindice con ninguno de los anteriores.\n";
  }

  return 666;
}