

int drop (int n, LInt *l){
    int i;
    for(i=0;(*l)!=NULL && n>0;i++){
        LInt aux=(*l)->prox;
        free(*l);
        *l=(*l)->prox;
        n--;
    }
    return i;