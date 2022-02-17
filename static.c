#include <stdio.h>

int series(void);

int main(int argc, char **argv)
{
  printf("%d\n", series());
  printf("%d\n", series());
  printf("%d\n", series());
  printf("%d\n", series());
  printf("%d\n", series());
  printf("%d\n", series());

  return 0;
}

int series (void)
{
  static int series_num;
  series_num = series_num + 23;

  return series_num;
}