/*
escribamos un numero entero (maximo 3999) del orden de los millares a romanos

I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000

Resolver :
2022 : 2 * 1000 + 0 * 100 + 2 * 10 + 2
*/

#include <iostream>
using namespace std;

int main() {
  int numero, unidades, decenas, centenas, millar;

  // Ingresamos el numero
  cout << "Ingrese un numero de 4 cifras ";
  cin >> numero;

  unidades = numero % 10;
  numero = numero / 10;
  decenas = numero % 10;
  numero = numero / 10;
  centenas = numero % 10;
  numero = numero / 10;
  millar = numero % 10;
  numero = numero / 10;

  cout << "Unidades " << unidades << endl;
  cout << "Decenas " << decenas << endl;
  cout << "Centenas " << centenas << endl;
  cout << "Unidades de Millar " << millar << endl;

  // Traduccion de Unidades de millar a Romanos
  switch (millar) {
  case 1:
    cout << "M";
    break;
  case 2:
    cout << "MM";
    break;
  case 3:
    cout << "MMM";
    break;
  }

  // traaduccion de centenas a Romanos
  switch (centenas) {
  case 1:
    cout << "C";
    break;
  case 2:
    cout << "CC";
    break;
  case 3:
    cout << "CCC";
    break;
  case 4:
    cout << "CD";
    break;
  case 5:
    cout << "D";
    break;
  case 6:
    cout << "DC";
    break;
  case 7:
    cout << "DCC";
    break;
  case 8:
    cout << "DCCC";
    break;
  case 9:
    cout << "CM";
    break;
  }

  // Traducimos decenas a romanos
  switch (decenas) {
  case 1:
    cout << "X";
    break;
  case 2:
    cout << "XX";
    break;
  case 3:
    cout << "XXX";
    break;
  case 4:
    cout << "XL";
    break;
  case 5:
    cout << "L";
    break;
  case 6:
    cout << "LX";
    break;
  case 7:
    cout << "LXX";
    break;
  case 8:
    cout << "LXXX";
    break;
  case 9:
    cout << "XC";
    break;
  }

  // Traducimos unidades a romanos
  switch (unidades) {
  case 1:
    cout << "I\n";
    break;
  case 2:
    cout << "II\n";
    break;
  case 3:
    cout << "III\n";
    break;
  case 4:
    cout << "IV\n";
    break;
  case 5:
    cout << "V\n";
    break;
  case 6:
    cout << "VI\n";
    break;
  case 7:
    cout << "VII\n";
    break;
  case 8:
    cout << "VIII\n";
    break;
  case 9:
    cout << "IX\n";
    break;
  }

  return 2022;
}
