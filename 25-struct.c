#include <string.h>

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

	goods item2;
}
