#include <stdio.h>

int main()
{
	printf("String: ");
	printf("Hello!\r\n");

	printf("%s\r\n", "Hello2!");

	printf("%c\r\n", 33);
	printf("%c\r\n", 64);

	printf("Signed integer: ");

	printf("%li\r\n", 3000000000);

	// float & double

	printf("%f\r\n", 12.3456f);
	printf("%lf\r\n", 12.3456f);

	// hex

	printf("0x%X\r\n", 10);

	#if 0
	printf("No out");
	#endif

	printf("Out\r\n");
}
