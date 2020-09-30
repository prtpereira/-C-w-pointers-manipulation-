#include <stdio.h>
#include <stdlib.h>

typedef struct lligada
{
	int valor;
	struct lligada *prox;

}*LInt;

LInt build(LInt l, int x){
	LInt v;	
	v=(LInt)malloc(sizeof(struct lligada));
	v->valor = x;
	v->prox = l;
	return v;
}
void freeL(LInt l){
	LInt x;
	while (x!=NULL){
		x=l->prox;
		free(l);
		l=x;
	}
}
int main(int argc, char const *argv[])
{
	LInt l=NULL;
	int i;
	for(i=1;i!=6;i++)l=build(l, i);
	freeL(l);
/*	printf("{");
	while (1){
		if (l->prox == NULL){
			printf("%i}\n", l->valor);
			break;}
		printf("%i, ", l->valor);
		l=l->prox;
	}*/
	return 0;
}