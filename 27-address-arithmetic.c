#include <stdio.h>

void main() {
	unsigned int a[10] = {0x33333333, 0x44444444, 0x55555555, 0x66666666, 0x77777777, 0x88888888, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC};
	unsigned int *p0_a, *p5_a;
	p0_a = &a[0];
	p5_a = &a[5];

	for (unsigned int i = 0; i < 10; i++) {
		printf("%i | %li | %p | %x \n", i, sizeof(&a[i]), &a[i], a[i]);
	}

	printf("\n");

	printf("%p | %x \n", p0_a, *p0_a);
	printf("%p | %x \n\n", p5_a, *p5_a);

	p0_a++;
	p5_a++;
	printf("%p | %x \n", p0_a, *p0_a);
	printf("%p | %x \n\n", p5_a, *p5_a);

	p0_a--;
	p5_a--;
	printf("%p | %x \n", p0_a, *p0_a);
	printf("%p | %x \n\n", p5_a, *p5_a);

	p0_a += 3;
	p5_a += 3;
	printf("%p | %x \n", p0_a, *p0_a);
	printf("%p | %x \n\n", p5_a, *p5_a);

	p0_a -= 2;
	p5_a -= 2;
	printf("%p | %x \n", p0_a, *p0_a);
	printf("%p | %x \n\n", p5_a, *p5_a);

	unsigned int n = p5_a - p0_a;
	printf("%i \n\n", n);

	printf("*++p0_a = %x \n", *++p0_a);
	printf("*++p5_a = %x \n\n", *++p5_a);

	printf("*++p0_a = %x \n", *++p0_a);
	printf("*++p5_a = %x \n\n", *++p5_a);

	printf("++*p0_a = %x \n", ++*p0_a);
	printf("++*p5_a = %x \n\n", ++*p5_a);

	printf("++*p0_a = %x \n", ++*p0_a);
	printf("++*p5_a = %x \n\n", ++*p5_a);
}
