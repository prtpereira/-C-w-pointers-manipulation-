

int altura (ABin a){
	int altura (ABin a){
  	int ret=0;
	if(a!=NULL){
		ret=menor(altura(a->esq),altura(a->dir)) +1;
	}
	return ret;
}

int menor(int x,int y){
    if(x>y) return x;
    return y;
}