#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;
/*--------------------
----------------------
----------------------*/

int removeOneOrd (LInt *l, int x){
	int res=1;
	while(*l!=NULL){
	if( (*l)->valor>x ) break;
	if( (*l)->valor==x ){
		LInt aux =(*l)->prox;
		free(*l);
		*l=aux;
		res=0;
		break;
		}
	l=&(*l)->prox;
	}
	return res;
}
