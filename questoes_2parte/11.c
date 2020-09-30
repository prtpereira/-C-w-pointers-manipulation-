

int existe (LInt l, int n,int x){
    int res=0;
    int i;
    for(i=0;i<n && l!=NULL;i++){
        if(l->valor==x) res=1;
        l=l->prox;
    }
    return res;
}
int removeDups (LInt *l){
    int i;
    LInt inicio=*l;
    for(i=0;(*l)!=NULL;i++){
        if(existe(inicio,i,(*l)->valor)){
            LInt aux=(*l)->prox;
            free(*l);
            *l=aux;
            i--;
        }else l=&(*l)->prox;
    }
    return i;
}
