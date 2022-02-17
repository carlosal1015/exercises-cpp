#include <iostream>
#include <cmath>

template <typename T>
T norma_2(T x_1, T x_2)
{
  return std::sqrt(x_1*x_1 + x_2*x_2);
}

int main()
{
  float u_1 = 1, u_2 = 1;
  double y_1 = 0, y_2 = 1;
  int z_1 = 1, z_2 = 0;

  std::cout << norma_2(u_1, u_2)
            << std::endl
            << norma_2(y_1, y_2)
            << std::endl
            << norma_2(z_1, z_2)
            << std::endl;

  return 0;
}