


LInt somasAcL (LInt l) {
    LInt new;
    LInt *pt=&(new);
    int count=0;
    while(l!=NULL){
        count+=l->valor;
        (*pt)=malloc(sizeof(LInt));
        (*pt)->valor=count;
        pt=&(*pt)->prox;
        l=l->prox;
    }
    (*pt)=NULL;
    return new;
}