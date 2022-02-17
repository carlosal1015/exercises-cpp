#include <cmath>
#include <iostream>

using namespace std;
int main() {

  for (int i = 50; i <= 100; i++) {
    // i++ forma corta de escribir i = i+1
    // Si i es par eleva i**2 si i es impar i**3
    if (i % 2 == 0) {
      cout << pow(i, 2) << endl;
    } else {
      cout << pow(i, 3) << endl;
    }

  } // fin del for

  return 666;
}