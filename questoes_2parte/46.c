
int depthOrd (ABin a, int x){
	int res=-1;
	if(a!=NULL){
		if(a->valor==x) res=1;
			else{
				if(x<a->valor && depthOrd(a->esq,x)!=-1) res= 1 + depthOrd(a->esq,x);
				if(x>a->valor && depthOrd(a->dir,x)!=-1) res= 1 + depthOrd(a->dir,x);
			}
	}
	return res;
}