#include <stdio.h>

struct employee
{
  char name[100];
  int age;
  float wage;
} emp;

int main(int argc, char **argv)
{
  struct employee *p = &emp;

  //emp.wage = 123.23;
  p->wage = 123.23;

  //printf("Employ wage %s", );

  return 0;
}