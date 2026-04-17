#include <stdio.h>

void main() {
	unsigned int a = 0xaabbccdd;
	unsigned int *p_a;
	p_a = &a;
	printf("%x | %x \n", a, p_a);
	printf("%x | %x \n", &a, &p_a);
	printf("%x \n", *p_a);

	*p_a = 0xbbddffee;
	printf("%x \n", *p_a);

	unsigned int **p_p_a;
	p_p_a = &p_a;

	printf("%x \n", **p_p_a);
}
