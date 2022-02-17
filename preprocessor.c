#include <stdio.h>

#define LEFT 1
#define RIGHT 0
#define UP LEFT + RIGHT
#define MENSAJE                                                                \
  "7 de febrero del 2022 \
lunes en Per'u"

int main(int argc, char **argv) {
  printf("%d %d %d %s\n", LEFT, RIGHT, UP, MENSAJE);

  return 0;
}