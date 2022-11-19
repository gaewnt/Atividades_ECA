#include <stdio.h>

int isPrimeNumber(int numb)
{
  int counter = 0;

  for (int i = 1; i <= numb; i++)
  {
    if (numb % i == 0)
    {
      counter++;
    }
  }

  return counter == 2;
}

int main(int argc, char const *argv[])
{
  int n = 0;

  scanf("%d", &n);

  if (n <= 0)
  {
    printf("Numero invalido\n");
    return 0;
  }

  if (isPrimeNumber(n))
  {
    printf("Eh primo\n");
  }
  else
  {
    printf("Nao eh primo\n");
  }

  return 0;
}