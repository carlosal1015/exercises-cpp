#include <stdio.h>

int main(int argc, char **argv)
{
  int x = 10;

  int* p = &x;

  x = x + 1; // x = 11

  *p = x + 1; // x = 12

  //printf("%p\n", p);
  printf("x = %d\n", *p);

  return 0;
}