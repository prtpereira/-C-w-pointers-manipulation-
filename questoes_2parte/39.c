

int nivelV (ABin a, int n, int v[]){
  	int res=0;
  	if(n==1 && a!=NULL){
		v[res]=a->valor;
		res++;
	}
	if(a!=NULL && n>1){
	res=nivelV(a->esq,n-1,v+res);
	res+=nivelV(a->dir,n-1,v+res);
	}
	return res; 
}