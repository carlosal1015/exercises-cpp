#include <stdio.h>
#include <stdlib.h>

int int_pwr(register int m, register int e)
{
  register int temp;

  temp = 1;

  for (; e; e--)
  {
    temp = temp * m;
  }
  return temp;
}

int main(int argc, char **argv)
{
  printf("%d\n", int_pwr(10, 2));

  return EXIT_SUCCESS;
}