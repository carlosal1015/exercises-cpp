#include <iostream>
#include <cmath>
#include <string>

int main() {
  auto a = 10;
  auto b = 10;

  // Leer las variables a  y b
  /*
  cout : c output
  cin : c input
  */

  std::cout << "Ingresa  a " << std::endl;
  std::cin >> a;

  std::cout << "Ingresa  b " << std::endl;
  std::cin >> b;

  // Imprimamos la suma de a y b
  std::cout << " la suma de \t "
            << a
            << " mas "
            << b
            << " es : "
            << a + b
            << std::endl;
  for (int i = 0; i < 20; ++i) {
      std::cout << i << std::endl;
  }

  int scores[] {10, 20, 30};

  for (int score : scores) {
    std::cout << score << std::endl;
  }

  return 2022;
}