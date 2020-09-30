#include <stdio.h>
#include <string.h>

char *sstrcpy (char *dest, char source[])
{
		int i;
		for(i=0; source[i]!='\0'; i++)
			dest[i]=source[i];

		dest[i]='\0';
		
		return dest;
}

int main()
{
	char string[200];
	char copy[200];

	scanf("%s",string);
	
	printf("\"%s\"",sstrcpy(copy,string));
}
