#include <stdio.h>

void my_counter(void)
{
	static int i = 0;
	printf("my_counter i = %i\n", i);
	i++;
}

void main()
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

	printf("=============\n");

	for (int i = 0; i < 3; i++) {
		static int n = 0;
		n++;
		printf("n = %i\n", n);
	}

	printf("=============\n");

	my_counter();
	my_counter();
	my_counter();
}
