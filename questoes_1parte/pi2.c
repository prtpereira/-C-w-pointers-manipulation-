#include <stdio.h>

main()
{
	int n,maior=0;

	while (scanf("%d",&n))
	{
		if ((n%2==0) && (n%5==0) && (n>maior))
			maior=n;
	}

	printf("\nMaior: %d\n",maior);
}