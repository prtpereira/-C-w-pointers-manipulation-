#include <stdio.h>


#define ORD 4


void transposta (int N, float m [N][N])
{
	int i,j,tmp;
	for(i=0; i<N; i++)
		for(j=i; j<N; j++)
			{tmp = m[j][i];
			m[j][i] = m[i][j];
			m[i][j] = tmp;}
}

int main()
{
	float matriz[ORD][ORD];

	int i,j,num;

	//definir a matriz com os valores 1,2,3,4,5,6...16
	for(i=num=0; i<ORD; i++)
		for(j=0; j<ORD; j++)
			matriz[i][j]=++num;


	transposta(ORD,matriz);

	//imprimir matriz
	for(i=num=0; i<ORD; i++)
	{	for(j=0; j<ORD; j++)
			printf("%2.0f ",matriz[i][j]);
		printf("\n");
	}

	return 0;
}