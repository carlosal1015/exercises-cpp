#include <iostream>

int main(int argc, char **argv)
{
  int x;
  int *p1, *p2;

  p1 = &x;
  p2 = p1;

  std::cout << p1
            << std::endl
            << p2
            << std::endl;

  return 0;
}