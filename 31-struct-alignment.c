#include <stdio.h>

float yf, zf;

typedef struct
{
	unsigned char x;
	unsigned short y;
	unsigned int z;
} my_arg_t;

void main()
{
	printf("sizeof data is %zu\n", sizeof(my_arg_t));
}
