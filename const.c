#include <stdio.h>

void sp_to_dash(const char *);

int main(int argc, char **argv) {
  sp_to_dash("Universidad Nacional de Ingeniería");

  return 0;
}

void sp_to_dash(const char *str) {
  while (*str) {
    if (*str == ' ')
      printf("%c", '-');
    else
      printf("%c", *str);
    str++;
  }
}