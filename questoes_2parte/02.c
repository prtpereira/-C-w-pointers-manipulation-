

void freeL (LInt a){
	while(a!=NULL){
		LInt aux=a->prox;
		free(a);
		a=aux;
	}
}