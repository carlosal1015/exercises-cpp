#include <iostream>
#include <boost/math/constants/constants.hpp>

double area(double r)
{
   using namespace boost::math::double_constants;
   return pi * r * r;
}

int main()
{
  std::cout << area(1.0) << std::endl;
  return 0;
}