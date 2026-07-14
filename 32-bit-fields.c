#include <stdio.h>
#include <limits.h>

#pragma pack(push, 1)
typedef struct
{
	unsigned char diad0:2;
	unsigned char tri0:3;
	unsigned char bit0:1;
	unsigned char bit1:1;
	unsigned char a;
	unsigned short b;
} my_arg_t;

typedef struct
{
	unsigned short tetr0:4;
	unsigned short tetr1:4;
	unsigned short diad1:2;
	unsigned short diad2:2;
	unsigned short triad1:3;
	unsigned short bit1:1;
	unsigned short b;
} my_arg_t2;
#pragma pack(pop)

void int_to_binary(long long value, char *output) {
    int total_bits = sizeof(value) * CHAR_BIT;
    int highest_bit = 0;

    for (int i = total_bits - 1; i >= 0; i--) {
        if ((value >> i) & 1) {
            highest_bit = i;
            break;
        }
    }

    int print_bits = ((highest_bit / 8) + 1) * 8;
    if (print_bits < 8) print_bits = 8;

    *output++ = '0';
    *output++ = 'b';

    for (int i = print_bits - 1; i >= 0; i--) {
        *output++ = ((value >> i) & 1) ? '1' : '0';
    }

    *output = '\0';
}

void main()
{
	printf("struct size: %ld\n", sizeof(my_arg_t));

	my_arg_t my_arg;
	my_arg.diad0 = 0b10;
	my_arg.tri0 = 0b101;
	my_arg.bit0 = 0b1;
	my_arg.bit1 = 0b1;
	my_arg.a = 0x98;
	my_arg.b = 0x7654;

	char str1[35];

	int_to_binary(my_arg.diad0, str1);
	printf("diad0 = %s\n", str1);

	int_to_binary(my_arg.tri0, str1);
	printf("tri0 = %s\n", str1);

	int_to_binary(my_arg.bit0, str1);
	printf("bit0 = %s\n", str1);

	int_to_binary(my_arg.bit1, str1);
	printf("bit1 = %s\n", str1);

	printf("a = 0x%02X\n", my_arg.a);
	printf("b = 0x%04X\n", my_arg.b);

	//

	printf("struct2 size: %ld\n", sizeof(my_arg_t2));

	my_arg_t2 my_arg2;
	my_arg2.tetr0 = 0xA;
	my_arg2.tetr1 = 0xB;
	my_arg2.diad1 = 0b10;
	my_arg2.diad2 = 0b01;
	my_arg2.triad1 = 0b101;
	my_arg2.bit1 = 0b1;
	my_arg2.b = 0x7654;

	printf("my_arg2 = 0x%08X\n", *(unsigned int*)&my_arg2);

	*(unsigned int*)&my_arg2 = 0x89ABCDEF;
	int_to_binary(*(unsigned int*)&my_arg2, str1);
	printf("my_arg2 = %s\n", str1);

	printf("tetr0 = %01X\n", my_arg2.tetr0);
	printf("tetr1 = %01X\n", my_arg2.tetr1);
	printf("diad1 = %01X\n", my_arg2.diad1);
	printf("diad2 = %01X\n", my_arg2.diad2);
	printf("triad1 = %01X\n", my_arg2.triad1);
	printf("bit1 = %01X\n", my_arg2.bit1);
	printf("b = 0x%04X\n", my_arg2.b);
}
