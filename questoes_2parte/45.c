

int lookupAB (ABin a, int x) {
    int res=0;
	if(a!=NULL && a->valor==x) res=1;
	if(a!=NULL && x< a->valor ) res= lookupAB(a->esq,x);
	if(a!=NULL && x> a->valor ) res= lookupAB(a->dir,x);
	return res;
}