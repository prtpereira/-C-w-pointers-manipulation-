#include <stdio.h>

#define MAX 4

void transposta(int v[][MAX]){

	int i,j,k;

	for(i=0;i<MAX; i++){
		for(j=i;j<MAX; j++){
			
			k=v[i][j];
			v[i][j]=v[j][i];
			v[j][i]=k;
		}
	}

}



int main(){

	int mat[MAX][MAX];
	int i,j,k;

	for(i=0;i<MAX; i++){
		for(j=0;j<MAX; j++){
			mat[i][j]=(i*MAX+j)+1;
		}
	}

	transposta(mat);

	for(i=0;i<MAX; i++){
		for(j=0;j<MAX; j++){
			printf("%3d  ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}