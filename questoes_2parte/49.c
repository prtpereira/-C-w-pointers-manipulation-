

int quantosMaiores (ABin a, int x){
	int result=0;
	if(a!=NULL){
		if(a->valor>x) result=1;
		result+= quantosMaiores(a->esq,x) + quantosMaiores(a->dir,x);
	}
	return result;
}