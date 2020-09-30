#include <stdio.h>

#define ORD 4

void sumDiag (int N, int m [N][N])
{
	int i,j,sum=0;

	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			sum+=m[i][j];
		m[i][i]=sum-m[i][i];
		sum=0;
	}
		
}


int main()
{
	
	int i,j;
	int matriz[ORD][ORD] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};


	sumDiag(ORD,matriz);

	//imprimir matriz
	for(i=0; i<ORD; i++)
	{	for(j=0; j<ORD; j++)
			printf("%2d ",matriz[i][j]);
		printf("\n");
	}


	return 0;
}