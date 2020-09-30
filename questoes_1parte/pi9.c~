#include <stdio.h>
#include <string.h>

char *sstrcat (char s1[], char s2[])
{
		int i,len;

		len=strlen(s1);

		for(i=0; s2[i]!='\0'; i++)
			s1[i+len]=s2[i];

		s1[len+i]='\0';
		
		return s1;
}

int main()
{
	char string1[200];
	char string2[200];

	scanf("%s %s",string1,string2);
	
	printf("\"%s\"",sstrcat(string1,string2));
}
