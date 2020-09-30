#include <stdio.h>




int main()
{
	//65 90 97 122
	char ch;

	for(ch='a'; ch<='z'; ch++)
		printf("Carater %c corresponde ao codigo ASCII: %2d\n",ch,ch);
	printf("\n\n");
	for(ch='A'; ch<='Z'; ch++)
		printf("Carater %c corresponde ao codigo ASCII: %2d\n",ch,ch);
}