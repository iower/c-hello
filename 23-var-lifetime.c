#include <stdio.h>

void main ()
{
	for (int i = 0; i < 2; i++)
	{
		auto int auto_test = 0;
		static int static_test = 0;
		register int register_test = 0;

		static_test++;
		auto_test++;
		register_test++;

		printf("[%i] auto_test = %i\n", i, auto_test);
		printf("[%i] static_test = %i\n", i, static_test);
		printf("[%i] register_test = %i\n", i, static_test);
	}
}
