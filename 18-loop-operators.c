void main()
{
	char str[10] = {};

	while(1)
	{
		printf("1: item1\n");
		printf("2: item2\n");
		printf("3: item3\n");
		printf("0: exit\n");
		scanf("%s", str);

		if(strlen(str)>1 || strlen(str)==0)
		{
			printf("Only one character\n");
		}

		if(str[0]>'3' || str[0]<'0')
		{
			printf("0-3\n");
			continue;
		}

		if(str[0]=='0') break;
		switch (str[0])
		{
			case '1':
				printf("selected 1\n");
				break;
			case '2':
				printf("selected 2\n");
				break;
			case '3':
				printf("selected 3\n");
				break;
		}
	}
}
