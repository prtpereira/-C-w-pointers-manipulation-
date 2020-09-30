#include <stdio.h>

#define ORD1 4
#define ORD2 4

void addTo (int N, int M, int a [N][M], int b[N][M])
{
	int i,j;

	for(i=0; i<N; i++)
		for(j=0; j<M; j++)
		{
			a[i][j]+=a[i][j];
		}
}


int main()
{
	
	int i,j;
	int m1[ORD1][ORD2] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int m2[ORD1][ORD2] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	addTo(ORD1,ORD2,m1,m2);

	//imprimir matriz
	for(i=0; i<ORD1; i++)
	{	for(j=0; j<ORD2; j++)
			printf("%2d ",m1[i][j]);
		printf("\n");
	}


	return 0;
}