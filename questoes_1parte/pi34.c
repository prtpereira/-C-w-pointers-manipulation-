#include <string.h>
#include <stdio.h>

#define SIZE 12

int maxCresc (int v[], int N)
{
	int i, seq=0;
	int maior=0;
	
	for(i=0; i<N-1; i++)
	{
		if (v[i]<v[i+1])
			seq++;
		else 
			if (seq>maior)
			{
				maior=seq;
			 	seq=0;
			}

	}

	return maior+1;
}


int main()
{
	int nums[SIZE] = {1, 2, 3, 2, 1, 4, 10, 12, 20, 29, 5, 4};
	int seq;
	
	seq = maxCresc(nums,SIZE);

	printf("%d\n",seq);

	return 0;
}