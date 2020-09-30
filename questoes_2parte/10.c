#include <stdio.h>
#include <stdlib.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;



int removeAll (LInt *l, int x){
	int ocorre=0;
	while((*l)!=NULL){
		if(((*l)->valor == x)){
			LInt aux=(*l)->prox;
			free(*l);
			*l=aux;
			ocorre++;
		}else l=&(*l)->prox;
}
	return ocorre;
}