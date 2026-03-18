#include <stdio.h>
#include "21-ariph.h"

void print_res(char str[]);

float res;
float yf, zf;
char str1[30] = {};

int main()
{
  float xf = 8;
  yf = 3;
  zf = 2;
  res = xf + my_sum();
  //printf ("Value is %.5f\n", res);

  sprintf(str1, "Value is ");
  print_res(str1);

  res = xf + yf - zf;
  printf ("Value is %.5f\n", res);

  return 0;
}

void print_res(char str[])
{
  printf("%s %.5f\n", str, res);
}
