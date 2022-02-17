#include <stdio.h>

int main(int argc, char **argv)
{
  int y;
  int x = (y = 3, y + 1);

  printf("x = %d, y = %d\n", x, y);


  return 0;
}