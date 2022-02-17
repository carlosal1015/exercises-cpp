#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int magic, guess;
  magic = rand();

  printf("Guess the number: ");
  scanf("%d", &guess);

  if (guess == magic)
  {
    printf("** Right **");
    printf("The number magic is %d\n", magic);
  }
  else if (guess > magic)
  {
    printf("** Too high **");
  }
  else
  {
    printf("** Too low **");
  }

  return 0;
}