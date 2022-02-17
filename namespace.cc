#include <iostream>

namespace physics
{
  float pi = 3.14;
  void saludar()
  {
    std::cout << "Hola physics.\n";
  }
}

namespace math
{
  float pi = 2*3.14;
  void saludar()
  {
    std::cout << "Hola math.\n";
  }
}

int main(int argc, char **argv)
{
  std::cout << physics::pi << std::endl;
  std::cout << math::pi << std::endl;
  
  //std::cout << physics::saludar() << std::endl;
//            << math::saludar()
//            << std::endl;
  return 0;
}
// :: operadorer de resoluci'on de 'ambito.