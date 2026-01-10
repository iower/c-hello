#include <stdio.h>

float my_div(float a, float b)
{
	return a/b;
}

void main()
{
	int i;
	char c = 45;
	i = (int)c;
	printf("%d\n", i);

	i = 1000;
	c = i;
	printf("%d\n", c);

	int a = 8;
	int b = 3;
	float res = a / b;
	printf("%.10f\n", res);

	float res2 = (float) a / (float) b;
	printf("%.10f\n", res2);

	float res3 = my_div(a, b);
	printf("%.10f\n", res3);

	unsigned int ii = 65535;
	unsigned char cc = ii;
	unsigned int jj = cc;
	printf("%u, %u, %u\n", ii, cc, jj);

	int arr[10] = {0, 1};
	float f = 1.2f;
	printf("%d\n", arr[(int)f]);
}
