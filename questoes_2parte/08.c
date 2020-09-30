
LInt newLInt (int v, LInt t);

void splitMS (LInt l, int x, LInt *mx, LInt *Mx){
    while(l!=NULL){
        if(l->valor < x){
            *mx=l;
            mx=&(*mx)->prox;
        }else{
            *Mx=l;
            Mx=&(*Mx)->prox;
        }
        l=l->prox;
    }
    *Mx=NULL;
    *mx=NULL;
}