#include <stdio.h>
#include <string.h>

#define SIZE 10


int elimRepOrd (int v[], int n)
{
	int i;
	for(i=0; v[i]!='\0'; i++) ;

	return i;
}


int main()
{

	int nums[SIZE] = {1, 2, 3, 2, 1, 4, 2, 4, 5, 4};
	int elems;
	
	elems = elimRepOrd(nums,SIZE);

	printf("%d\n", strlen(nums));

	return 0;
}