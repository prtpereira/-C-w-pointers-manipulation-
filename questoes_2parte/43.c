

ABin cloneMirror (ABin a){
	ABin new=(ABin)malloc(sizeof(ABin));
	if(a==NULL) new=NULL;
	else{
		new->valor=a->valor;
		new->esq=cloneMirror(a->dir);
		new->dir=cloneMirror(a->esq);
	}
	return new;
}