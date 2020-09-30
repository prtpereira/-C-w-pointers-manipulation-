#include <stdio.h>


#define ORD 6


int triSup (int N, float m [N][N])
{
	int i,j;
	for(i=0; i<N; i++)
		for(j=0; j<i; j++)
			if (m[i][j]!=0) return 0;

	return 1;
}


int main()
{
	float matriz[ORD][ORD]= {{1,2,3,4,4,4},{0,5,4,4,4,6},{0,0,4,4,45,6},{0,0,0,5,4,4},{0,0,0,0,5,3},{0,0,0,0,0,3}};

	if (triSup(ORD,matriz))
		printf("verdadeiro\n");
	else printf("falso\n");


	return 0;
}