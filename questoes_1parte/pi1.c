#include <stdio.h>

main()
{
	int n,sum=0;

	while (scanf("%d",&n))
	{
		if ((n%2==0) && (n%5==0))
			sum+=n;
	}

	printf("\nSoma: %d\n",sum);
}