#include <stdio.h>


int sstrlen (char str[])
{
	int i;
	for(i=0; str[i]!='\0'; i++)
		;//nao faz nada, apenas incrementa i (se nao estiver no fim da strring)

	return i;
}

int main()
{
	char string[200];
	int carateres;

	scanf("%s",string);
	
	carateres = sstrlen(string);

	printf("\"%s\" possui %d carateres.\n",string,carateres);
}
