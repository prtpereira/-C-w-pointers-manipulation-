

LInt cloneRev (LInt l){
	LInt ret=NULL;
	while(l!=NULL){
		LInt new=malloc(sizeof(Nodo));
		new->valor=l->valor;
		new->prox=ret;
		ret=new;
		l=l->prox;
	}
	return ret;
}