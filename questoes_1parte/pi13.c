#include <stdio.h>
#include <string.h>

void strrevv (char *s);

int main()
{
	char string[200];

	scanf("%s",string);
	strrevv(string);
	printf("%s",string);
}


void strrevv (char *s)
{
	int i, len=strlen(s);
	char tmp;
	
	for(i=0; i<(len/2); i++);
	{
		tmp = s[len-1-i];
		s[len-1-i] = s[i];
		s[i] = tmp;
	}
		
}