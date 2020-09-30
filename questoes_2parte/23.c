#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

LInt arrayToList (int v[], int N){
	LInt a=NULL;
	int i;
	for(i=0;i<N;i++){
		LInt new=(LInt)malloc(sizeof(LInt));
		new->valor=v[i];
		new->prox=a;
		a=new;
	}
	return a;
}
