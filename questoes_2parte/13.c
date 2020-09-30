#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

void init (LInt *l){
	if(*l==NULL) return ; 
	while((*l)->prox!=NULL)
		l=&(*l)->prox;
	*l=NULL;
}
