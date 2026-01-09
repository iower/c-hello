#include <stdio.h>

#define MYCONST_1 15
#define CONST0 0x0U
#define CONST1 0x1U
#define CONST2 0x2U
#define CONST_ 0xffU
#define CONST_HELLO "Hello!"

void main()
{
	printf("%d\n", MYCONST_1);
	printf("%d, %d, %d, %d\n", CONST0, CONST1, CONST2, CONST_);

	const int n = 123;
	printf("%d\n", n);

	printf("%ld\n", 123L);
	printf("%lu\n", 123LU);

	printf("%f\n", 1.23);
	printf("%.20f\n", 1.23e-10);

	const char str1[] = "Hello";
	printf("%s\n", str1);
	printf("%s\n", CONST_HELLO);
}
