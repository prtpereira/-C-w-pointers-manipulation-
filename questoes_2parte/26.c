

LInt rotateL (LInt l){
    LInt res=l;
    if(l!=NULL && l->prox!=NULL){               //se a lista tiver 0 ou 1 elemento nao altera nada
        LInt primeiro=l;					   //guardamos este valor para o colocar no fim (linha 9)
        res=l->prox; 						  //guardamos este valor para retornar no final 
        while(l->prox!=NULL) l=l->prox;
        l->prox=primeiro;
        primeiro->prox=NULL;
    }
    return res;
}