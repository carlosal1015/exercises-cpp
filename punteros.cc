#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
  double x = 100.1, y;
  int *p;

  p = (int *)&x;

  y = *p;

  std::cout << y << std::endl;

  return EXIT_SUCCESS;
}