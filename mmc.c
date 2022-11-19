#include <stdio.h>

int mdc(int a, int b)
{
  if (b == 0)
    return a;
  return mdc(b, a % b);
}

int mmc(int a, int b)
{
  return a * (b / mdc(a, b));
}

int main(int argc, char const *argv[])
{
  int a = 0;
  int b = 0;
  scanf("%d %d", &a, &b);

  printf("%d\n", mmc(a, b));

  return 0;
}