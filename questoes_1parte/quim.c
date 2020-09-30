#include <stdio.h>

int strlenl (char str[]){
	int i;
	for (i=0;str[i]!='\0';i++);
	return i;
}

int main(){
	printf("escreva a sua stirng:\n");
	char sr[5]="qwery";
	//scanf("%s",&sr);
	int x;
	x=strlenl(sr);
	printf("%d\n",x);
	return 0;
}