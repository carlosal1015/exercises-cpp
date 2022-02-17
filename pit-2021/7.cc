/*
Dado un numero entero positivo decir si es primo o no
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  bool isPrime = true;

  // Ingresemos el valor de n mayor a 1
  do {
    cout << "Ingresa un numero entero positivo " << endl;
    cin >> n;
  } while (n <= 1);

  // Busquemos factores 2 hasta n/2
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      isPrime = false;
      break; // cierra la estructura superior a la estructura a la cual
             // pertenece
    }
  } // Fin del for

  // Verificamos e imprimimos
  if (isPrime) {
    cout << "El numero ingresado es primo " << n << endl;
  } else {
    cout << "El numero ingresado es NO primo " << n << endl;
  }

  return 1821;
}