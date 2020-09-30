#include <stdio.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

int length (LInt l){
	int res=0;
	while(l!=NULL){
		res++;
		l=l->prox;
	}
	return res;
}