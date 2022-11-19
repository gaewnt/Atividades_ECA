#include <stdio.h>

int fatorial(int numb)
{
  if (numb < 0)
    return 0;
  if (numb == 1 || numb == 0)
    return 1;
  return numb * fatorial(numb - 1);
}

int main(int argc, char const *argv[])
{
  int n = 0;
  scanf("%d", &n);

  if (n < 0)
  {
    printf("Numero invalido");
    return 0;
  }

  printf("%d\n", fatorial(n));

  return 0;
}