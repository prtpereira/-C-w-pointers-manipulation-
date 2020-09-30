


void remreps (LInt l){
    while(l!=NULL){
        LInt *pt=&(l->prox);
        while(*pt!=NULL &&  (*pt)->valor == l->valor){
            LInt aux=(*pt)->prox;
            free(*pt);
            *pt=aux;
        }
        l=l->prox;
    }
}