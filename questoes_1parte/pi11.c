#include <stdio.h>
#include <string.h>


int sstrcmp (char s1[], char s2[])
{
	int i;
	for(i=0; s1[i]==s2[i] && s1[i]!='\0'; i++)
		;//nao faz nada

	return (s1[i]- s2[i]);
}

int main()
{
	char s1[200];
	char s2[200];

	scanf("%s %s",&s1,&s2);
	
	printf("%d",sstrcmp(s1,s2));
}