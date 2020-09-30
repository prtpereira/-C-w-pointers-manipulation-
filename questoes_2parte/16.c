
//nao esta no codeBoard...acho que esta mal..
//se encontrarem erros digam sff... 

LInt cloneL (LInt l){
	LInt ret;
	LInt *ptr=&ret;
	while(l!=NULL){
		(*ptr)=malloc(sizeof(Nodo));
		(*ptr)->valor=l->valor;
		ptr=&(*ptr);
		l=l->prox;
	}
	*ptr=NULL;
	return ret;
}