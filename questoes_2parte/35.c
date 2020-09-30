

int freeAB (ABin a) {
    int res=0;
    if(a!=NULL){
        res++;
        res+=freeAB(a->esq);
        res+=freeAB(a->dir);
        free(a);
    }
    return res;
}