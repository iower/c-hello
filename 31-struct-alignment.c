#include <stdio.h>

float yf, zf;

#pragma pack(push, 1)
//#pragma scalar_storage_order big-endian
typedef struct
{
	unsigned char x;
	unsigned short y;
	unsigned int z;
} my_arg_t;
#pragma pack(pop)
//#pragma scalar_storage_order little-endian

typedef union
{
	unsigned char x;
	unsigned short y;
	unsigned int z;
} my_arg_u;

void main()
{
	printf("sizeof struct is %zu\n", sizeof(my_arg_t));

	my_arg_t my_arg;
	my_arg.x = 0x11;
	// my_arg.y = 0x2233;
	my_arg.z = 0x44556677;

	printf("x = 0x%X\n", my_arg.x);
	// printf("y = 0x%X\n", my_arg.y);
	printf("z = 0x%X\n", my_arg.z);

	printf("addr x = 0x%X\n", &my_arg.x);
	// printf("addr y = 0x%X\n", &my_arg.y);
	printf("addr z = 0x%X\n", &my_arg.z);

	//

	printf("sizeof union is %zu\n", sizeof(my_arg_u));

	my_arg_u my_arg_2;
	my_arg_2.x = 0x11;
	// my_arg.y = 0x2233;
	my_arg_2.z = 0x44556677;

	printf("x = 0x%X\n", my_arg_2.x);
	// printf("y = 0x%X\n", my_arg_2.y);
	printf("z = 0x%X\n", my_arg_2.z);

	printf("addr x = 0x%X\n", &my_arg_2.x);
	// printf("addr y = 0x%X\n", &my_arg_2.y);
	printf("addr z = 0x%X\n", &my_arg_2.z);

	my_arg_2.x = 0x99;
	printf("z = 0x%X\n", my_arg_2.z);
}
