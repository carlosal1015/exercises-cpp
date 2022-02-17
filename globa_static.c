#include <stdio.h>
#include "file1.h"

int main(int argc, char **argv)
{
  series_start(0);
  printf("%d\n", series());
  printf("%d\n", series());
  printf("%d\n", series());
  printf("%d\n", series());

  return 0;
}