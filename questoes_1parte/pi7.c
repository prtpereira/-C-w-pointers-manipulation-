#include <stdio.h>

int qDig();

int main()
{
	int n;
	while (scanf("%u",&n))
	{
		printf("O 'unsigned int': %u  tem %d digitos\n",n,qDig(n));
	}

	return 0;
}


int qDig (unsigned int n)
{
	int digitos=0;

	if (n==0) return 1; //caso seja o inteiro 0 (que nao entra no while), retorna 1

	while (n!=0) {
		++digitos;
		n/=10;
	}

	return digitos;
}


scanf("%d",&num);

printf("%d",x);