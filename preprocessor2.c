#include <stdio.h>

#define ABS(x) (x)<0 ? -(x) : (x)

int main(int argc, char **argv)
{
  printf("|%d| = %d\n", -5, ABS(-5));

}