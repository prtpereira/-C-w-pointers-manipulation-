#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;
  
LInt newNode (LInt l, int x){
	LInt new= (LInt)malloc (sizeof(LInt));
	new->valor= x;
	new->prox= l;
	return new;
}
  
void appendL (LInt *l, int x){
	while((*l)!=NULL)
		l=&(*l)->prox;
	*l= newNode(NULL,x);
}
