#include <stdio.h>

int main()
{
  float xf = 8;
  float yf = 3;
  float zf = 2;
  float res = xf + yf + zf;
  printf ("Value is %.5f\n", res);
  res = xf + yf - zf;
  printf ("Value is %.5f\n", res);
  return 0;
}
