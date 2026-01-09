#include <stdio.h>

int main() {
	unsigned char c1 = 0;
	c1--;
	printf("%c\n", c1);

	unsigned short int s1 = 0;
	s1--;
	printf("%hu\n", s1);

	unsigned long long int lli1 = 0;
	lli1--;
	printf("%llu\n", lli1);

	int i1 = 33;
	int i2 = 10;
	printf("%i\n", i1 % i2);

	return 0;
}
