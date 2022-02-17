#include <iostream>
#include <cmath>

int main()
{
  double x;
  std::cout << "\nFunci'on y = f(x) en x = ";
  std::cin >> x;

  double sin_x = std::sin(x);
  double sinh_x = std::sinh(x);

  std::cout << sin_x
            << std::endl
            << sinh_x
            << std::endl;


}