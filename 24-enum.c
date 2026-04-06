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

	//

	typedef enum
	{
		SMALL,
		MIDDLE,
		LARGE
	} eSize;

	eSize var_size = LARGE;
	printf("var_size = %i\n", var_size);

	//

	enum
	{
		SMALL2,
		MIDDLE2,
		LARGE2,
	};

	printf("LARGE2 = %i\n", LARGE2);
}
