
int iguaisAB (ABin a, ABin b){
	int ret=0;
	if( a!=NULL && b!=NULL && (a->valor)==(b->valor) && iguaisAB(a->esq,b->esq) && iguaisAB(a->dir,b->dir))
		ret=1;
	if(a==NULL && b==NULL) 
		ret=1;
	return ret;
}