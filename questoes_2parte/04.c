

LInt reverseL (LInt l){ //cena do stor
	LInt r=NULL;
	LInt tmp;
	while(l!=NULL){
		tmp=l;
		l=l->prox;
		tmp->prox=r;
		r=tmp;
	}
	return r;
}
