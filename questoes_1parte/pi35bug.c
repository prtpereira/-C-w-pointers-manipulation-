#include <stdio.h>
#include <string.h>

#define SIZE 10


int removerTalvez(char k, int *v)
{
	int i,j;
	for(i=j=0; v[i]!='\0'; i++)
	{
		if (k!=v[i])
			v[j++]=v[i];
	}
	v[j]='\0';

	return j+1; //comprimento da string
}


int elimRep (int v[], int n)
{
	int i,elems;
	for(i=0; i<n; i++)
	{
		elems=1+removerTalvez(v[i],&v[i+1]); //tambem edita o proprio array
	}

	return elems;
}

int main()
{

	int nums[SIZE] = {1, 2, 3, 2, 1, 4, 7, 4, 5, 4};
	int i;
	int new_size;
	
	new_size = elimRep(nums,SIZE);


	for(i=0; i<new_size; i++)
		printf("%d, ", nums[i]);


	return 0;
}