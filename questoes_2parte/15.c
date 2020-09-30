#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;


void concatL (LInt *a, LInt b){
	while(*a!=NULL)
		a=&(*a)->prox;
	*a=b;
}
