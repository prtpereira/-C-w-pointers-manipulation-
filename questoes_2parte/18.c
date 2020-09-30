#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;


int maximo (LInt l){
	int x=l->valor;
	LInt *lpt=&l;
	while(*lpt!=NULL){
		if((*lpt)->valor > x) x=(*lpt)->valor;
		lpt=&(*lpt)->prox;
	}
	return x;
}
