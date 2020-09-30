#include <stdio.h>  //printf, scanf, puchar
#include <ctype.h>  //isdigit, isalpha, isalnum, tolower, toupper, strlen, strcat, strcmp
#include <string.h> //strlwr,  strupr, strchr, strrchr, strstr
#include <mem.h>    //memset, memcpy, memcmp, memicmp
#include <stdlib.h> //rand, srand --biblioteca standard de funcoes, atoi--> ArrayToInteger
#include <time.h>   //time

//   65 -  90 ASCII A-Z   //   97 - 122 ASCII a-z
//   \   |

//head <c luis damas<

main(int argc, char **argv)
{
	FILE *fp;
	int conta=0;

	if ((fp=fopen(argv[1],"rt"))==NULL)
	{
		fprintf(stderr, "impossivel abir o ficheiro: %s",argv[1]);
		exit(1);
	}

	while (fgetc(fp)!=EOF)
		conta++;

	fclose(fp);
	printf(">>>>>>> %d",conta);
}