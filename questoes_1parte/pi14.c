#include <stdio.h>
#include <string.h>

void strnoV();
int evogal(char c, char *vog);
void delc(char *string, int index);


int main()
{
	char string[200];

	scanf("%s",&string);
	strnoV(string);

	printf("%s",string);
}


void strnoV (char s[])
{
	int i,n;
	char vogais[]="aeiou";

	for(i=0; s[i]!='\0'; i++)
	{
		if (evogal(s[i],vogais))
			{
				delc(s,i);
				i--; //decrementa para verificar se a nova letra da mesma posicao tambem é vogal
			}
	}

}

void delc(char *s, int index)
{
	int i;
	for(i=index; s[i]!='\0'; i++)
		s[i]=s[i+1];
}


int evogal(char c, char *vog)
{
	int i;
	
	for(i=0; vog[i]!='\0'; i++)
		if (tolower(c)==vog[i])
			return 1;
		
	return 0;

}