#include <stdio.h>

#define mkstr(s) #s

int main(int argc, char **argv) {

  printf(mkstr(I like C / C++));

  return 0;
}