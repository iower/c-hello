#include <stdio.h>
#include <string.h>

void print_str(const char *c_str)
{
	printf("%s\n", c_str);
}

void main()
{
	char c_str[] = "a";
	print_str(c_str);

	char ch2[2];
	ch2[0] = 'b';
	ch2[1] = '\0';
	print_str(ch2);

	char str1[30] = {};
	strcpy(str1, "Hello!");
	print_str(str1);
}
