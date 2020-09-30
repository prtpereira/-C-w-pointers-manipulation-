

ABin cloneAB (ABin a){
	if(a==NULL) return NULL;
	ABin new=malloc(sizeof(ABin));
	new->valor=a->valor;
	new->esq=cloneAB(a->esq);
	new->dir=cloneAB(a->dir);
	return new; 
}