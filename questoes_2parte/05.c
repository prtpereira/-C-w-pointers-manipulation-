#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;
/*--------------------
----------------------
----------------------*/
LInt newNode (LInt l, int x){
	LInt new= (LInt)malloc (sizeof(LInt));
	new->valor= x;
	new->prox= l;
	return new;
}

void insertOrd (LInt *lpt, int x){
	while((*lpt!=NULL) && (*lpt)->valor<=x){
		lpt=&(*lpt)->prox;
	}
	*lpt=newNode(*lpt,x);
}


