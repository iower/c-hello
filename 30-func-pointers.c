#include <stdio.h>

void print_str(const char *c_str)
{
	puts(c_str);
}

void main()
{
	unsigned int *print_str_addr;
	print_str_addr = (unsigned int *)print_str;
	printf("%p\n", (void *)print_str_addr);

	void (*print_str_new)(const char *c_str);
	print_str_new = (void *)print_str_addr;
	print_str_new("Hi!");
}
