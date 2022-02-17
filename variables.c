#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
  wchar_t * wc;
  wc = L'A';
  printf("%s", wc);

  return 0;
}