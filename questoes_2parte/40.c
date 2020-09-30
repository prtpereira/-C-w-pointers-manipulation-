

int dumpAbin (ABin a, int v[], int N) {
    int res=0;
    if(a!=NULL&& N>0){
        res+=dumpAbin(a->esq,v,N);
        if(N>res){
            res++;
            v[res]==a->valor;
            res+=dumpAbin(a->dir,v+res,N-res);
        }
    }
    return res;
}