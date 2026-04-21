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

	printf("--- \n");

	unsigned char uch[10] = {0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC};
	unsigned char *p_uch = &uch;
	printf("%x \n", p_uch);
	printf("%x \n", *p_uch);

	for (unsigned char i = 0; i < 12; i++) {
		unsigned char *p_uch2 = &uch[i];
		printf("%u | %x | %x \n", i, p_uch2, *p_uch2);
	}

	printf("%x, %x...\n", p_uch[0], p_uch[1]);
	printf("uch %x\n", uch);

	unsigned int b;
	b = 0xaabbccdd;
	printf("b = 0x%08X\n", b);

	unsigned int *p_b;
	p_b = &b;
	printf("p_b = 0x%08X\n", (unsigned int)p_b);

	*p_b = 0x11223344;
	printf("b = 0x%08X\n", b);
	printf("p_b = 0x%08X\n", (unsigned int)p_b);
}
