#include <stdio.h>
#include <string.h>

void int_to_binary(int x, char* in_str)
{
	char str_tmp[9] = {};
	unsigned char i, j, k;
	unsigned char bt[4] = {0};
	for (j=0; j<4; j++)
	{
		if(((x >> j*8)==0) && (j>0)) break;
		bt[j] = (unsigned char) (x >> j*8);
	}

	strcpy(in_str, "0b");

	for (k=0; k<j; k++)
	{
		for (i=0; i<8; i++)
		{
			switch ((bt[j-k-1] >> i) & 0b00000001)
			{
				case 1: str_tmp[7-i] = '1'; break;
				case 0: str_tmp[7-i] = '0'; break;
			}
		}
	}
	strcat(in_str, str_tmp);
}

void main()
{
	// printf("%b\n", 0b0101);
	char str1[35] = {};
	unsigned char a=0b10101010, b=0b10001001;
	unsigned char res;

	res = a & b;

	int_to_binary(a, str1);
	printf("%s\n", str1);
	printf("    &\n");
	int_to_binary(b, str1);
	printf("%s\n", str1);
	printf("==========\n");
	int_to_binary(res, str1);
	printf("%s\n", str1);

	res = a | b;

	int_to_binary(a, str1);
	printf("%s\n", str1);
	printf("    |\n");
	int_to_binary(b, str1);
	printf("%s\n", str1);
	printf("==========\n");
	int_to_binary(res, str1);
	printf("%s\n", str1);
}
