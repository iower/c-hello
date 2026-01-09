#include <stdio.h>

int main()
{
	char symbol0;
	int cnt;
	float adc_val;

	char symbol1, symbol2, symbol3;

	symbol1 = 'a';
	symbol2 = 'b';
	symbol3 = 'c';
	cnt = 123;
	adc_val = 123.45f;

	char symbol4 = 'd';
	int cnt2 = 1234;
	float adc_val2 = 123.456f;

	printf("size: %lu\n", sizeof(symbol4));
	printf("size: %lu\n", sizeof(cnt2));
	printf("size: %lu\n", sizeof(adc_val2));

	// 1 byte
	char c1, c2;
	unsigned char c3;
	printf("char size: %lu, %lu\n", sizeof(c1), sizeof(c3));

	// 2 bytes
	short ns1;
	unsigned short ns2;
	printf("short size: %lu, %lu\n", sizeof(ns1), sizeof(ns2));

	// 4 bytes
	int ni1;
	unsigned int ni2;
	printf("int size: %lu, %lu\n", sizeof(ni1), sizeof(ni2));

	// 8 bytes
	long nl1;
	unsigned long nl2;
	printf("long size: %lu, %lu\n", sizeof(nl1), sizeof(nl2));

	// 8 bytes
	long long nll1;
	unsigned long long nll2;
	printf("long long size: %lu, %lu\n", sizeof(nll1), sizeof(nll2));

	// 4 bytes
	float f1;
	printf("float size: %lu\n", sizeof(f1));

	// 8 bytes
	double d1;
	printf("double size: %lu\n", sizeof(d1));

	// 16 bytes
	long double dd1;
	printf("long double size: %lu\n", sizeof(dd1));
}
