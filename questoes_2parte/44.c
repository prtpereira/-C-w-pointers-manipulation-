
int addOrd (ABin *a, int x){
	int ret=0;
	if(*a==NULL){
		*a=(ABin)malloc(sizeof(ABin));
		(*a)->valor=x;
		(*a)->esq = (*a)->dir = NULL;
	}else{
		int y= (*a)->valor;
		if(x==y){ 
			ret=1; 
		}else{
			if(x<y) ret=addOrd(&(*a)->esq,x); // ter atençao a passar o endereço (&) !! 
			if(x>y) ret=addOrd(&(*a)->dir,x);
		}
	}
	return ret;
}