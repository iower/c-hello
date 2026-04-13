#include <string.h>
#include <stdio.h>

void main()
{
	struct goods
	{
		char name[50];
		float amount;
		char measure[20];
		float price;
		float weight;
	};

	struct goods item;

	strcpy(item.name, "Some name");
	item.amount = 11;
	strcpy(item.measure, "Measure");
	item.price = 123;
	item.weight = 234;

	//

	typedef struct
	{
		char name[50];
		float amount;
	} goods2;

	goods2 item2;

	goods2 item3 = {"Some name", 1};
	goods2 item4 = {"Another name", 2};

	printf("%s\t%f\n", item3.name, item3.amount);
	printf("%s\t%f\n", item4.name, item4.amount);
}
