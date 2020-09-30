

void freeL (LInt l){
    LInt aux;
    while(l!=NULL){
        aux=l->prox;
        free (l);
        l=aux;
    }
}

int take (int n, LInt *l){
    int i;
    for(i=0;n>0 && *l!=NULL;i++){
        l=&(*l)->prox;
        n--;
    }
    freeL(*l);
    *l=NULL;
    return i;
}