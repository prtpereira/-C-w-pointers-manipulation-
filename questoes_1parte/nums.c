#include <stdio.h>

int main() {

	int a,b;
	scanf("%d %d", &a, &b);

	while (a<b+1){

		printf("%d\n",a);
		a++;	
	}

	return 0;
}