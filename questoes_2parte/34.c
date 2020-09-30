
/* a funçao min remove o menor se forem os dois != de -1
se forem os dois -1 retorn -1;
*/

int min(int x,int y){
	int res;
	if(x<0) res=y;
	if(y<0) res=x;
	if(x>0 && y>0){
		if(x<y) res=x;
		else res=y;
	}
	return res;
}


int depth (ABin a, int x){
	int ret=-1;
	if(a!=NULL){
	    if(a->valor==x) ret=1;
	    else{
	        int esq=depth(a->esq,x);
	        int dir=depth(a->dir,x);
	        ret=min(esq,dir);
	        if(ret>0) ret++; 
// se for -1, retorna -1... 
//se for >0 incrementa porque x esta (ret) posiçoes abaixo do nó em que estamos.
// logo em relaçao ao nó presente esta na posiçao (ret +1) 
	}
	return ret;
}