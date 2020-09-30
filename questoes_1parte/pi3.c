#include <stdio.h>

main()
{
	int n;
	//como o num acaba em 0, a media sera sempre um numero inteiro
	int media=0;

	while (scanf("%d",&n))
	{
		if ((n%2==0) && (n%5==0))
			media+=(n/2);
	}

	printf("\nMedia: %d\n",media);
}