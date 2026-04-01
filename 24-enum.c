#include <stdio.h>

void main()
{
	enum eColor
	{
		COLOR_RED,
		COLOR_GREEN,
		COLOR_BLUE,
	};

	printf("%i %i %i\n", COLOR_RED, COLOR_GREEN, COLOR_BLUE);

	enum eColor clr;
	clr = COLOR_GREEN;
	printf("clr = %i\n", clr);
}
