#include <stdio.h>

#define concat(a, b) a ## b

int main(int argc, char **argv) {
  int xy = 10;

  printf("%d\n", concat(x, y));

  return 0;
}