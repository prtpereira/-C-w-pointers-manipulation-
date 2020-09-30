#include <stdio.h>

int bitsUm();

int main()
{
	unsigned int n;
	int bits;
	
	scanf("%u",&n);
	printf("O 'unsigned int': %u  tem %d bits a 1\n",n,bitsUm(n));
	
	return 0;
}

int bitsUm (unsigned int n)
{
	int bits=0;

	while (n!=0)
	{
		if (n%2==1)
			++bits;

		n/=2;	
	}
	return bits;
}