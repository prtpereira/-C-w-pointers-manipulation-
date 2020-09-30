

int deProcura (ABin a){
	int dir=1;
	int esq=1;
	if(a==NULL) return 1; //caso de paragem geral
		else{ 
			if(a->esq!=NULL && (a->esq->valor > a->valor)) esq=0; 
			if(a->dir!=NULL && (a->dir->valor < a->valor)) dir=0; 
	}
	return (dir && esq && deProcura(a->esq) && deProcura(a->dir));	
}