#include <iostream>

int main(int argc, char **argv)
{
  std::cout << "La cantidad de argumentos es "
            << argc - 1
            << std::endl;

  for (int i = 1; i <argc; i++)
  {
    std::cout << argv[i] << std::endl;
  }

  return 0;
}