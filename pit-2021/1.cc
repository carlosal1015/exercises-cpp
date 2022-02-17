/*
Escriba un programa que lea la entrada estandar (teclado del usuario)
e indique (en la salida estandar) si el caracter es una vocal minuscula o no
*/

#include <iostream>
using namespace std;
int main() {
  char letra;

  cout << " Digite un caracter ";
  cin >> letra;

  switch (letra) {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    cout << "Es una vocal.";
    break;
  default:
    cout << "La letra ingresada no es una vocal.";
    break;
  }

  return 0;
}