

int contaFolhas (ABin a){
		int ret=0;
	if(a!=NULL){  
		if(a->esq == NULL && a->dir == NULL) ret= 1;
		else  ret = contaFolhas(a->esq) + contaFolhas(a->dir);
	}
	return ret;	
}