/*
Programe en C++
Solicite un numero entero de 1 a 10 y muestre su tabla de multiplicar
*/

#include <iostream>
using namespace std;
int main(int argc, char **argv) {
  int numero;

  //do{
  //cout<< "Digite un entero en [1,10]" << endl;
  //cin>> numero;
  //}while (numero <1 || numero >10);

  cout << "NUmero = " << numero;

  for (int i = 1; i <= 12; i++) {
    cout << argv[1] << " * " << i << " = " << (int) *argv[1] * i << endl;
  }

  return 10;
}