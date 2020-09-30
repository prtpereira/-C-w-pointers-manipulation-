typedef struct lligada {
	int valor;
	struct lligada *prox;
	
} *LInt;



//ex1
int length (LInt l){
    if (l==NULL) return 0;
    
    int x=0;
    
    while (l!=NULL){
        x++;
        l=l->prox;
    }
    
    return x;
    
}



//ex2
void freeL (LInt l) {

	while(l!=NULL){
		LInt aux=l->prox;
		free(l);
		l=aux;
	}
}



//ex3
void imprimeL(LInt l) {

	while (l!=NULL) {
		printf("%d\n", l->valor);
		l=l->prox;
	}
}



//ex4




//ex5
void insertOrd (LInt *l, int x){
    
    while ((*l)!=NULL && (*l)->valor < x) {
        l=&(*l)->prox;
    }
        
    *l = newLInt(x,*l);
}



//ex6
int removeOneOrd (LInt *l, int x){
    
    while (*l!=NULL) {
 		
 		if ((*l)->valor>x) break;       
        if ((*l)->valor==x){
            LInt aux = (*l)->prox;
            free(*l);
            *l=aux;
            return 0;
        }
        else l=&(*l)->prox;
    }
    
    return 1;
}



//ex7	BUG LISTA AO CONTRARIO
void merge (LInt *r, LInt l1, LInt l2){
    int n;
    
    while (l1 != NULL && l2 != NULL){
        if (l1->valor < l2-> valor){
            n=l1->valor;
            l1=l1->prox;
        }
        else {
            n=l2->valor;
            l2=l2->prox;
        }
        *r=newLInt(n,*r);
    }
    while (l1 != NULL){
        n=l1->valor;
        l1=l1->prox;
        *r=newLInt(n,*r);
    }
    while (l2 != NULL){
        n=l2->valor;
        l2=l2->prox;
        *r=newLInt(n,*r);
    }
}



//ex8
void splitMS (LInt l, int x, LInt *mx, LInt *Mx){
    while (l!=NULL){
        if (l->valor<x){
            //(*mx)->valor=l->valor;
            (*mx)=l; //endereço de l é endereço

            mx=&(*mx)->prox;
        }
        else {
            //(*Mx)->valor=l->valor;
            (*Mx)=l;
            Mx=&(*Mx)->prox;
        }
        l=l->prox;
    }

    //____
    //____
    *mx=NULL;
    *Mx=NULL;
}
//BUG	 LISTA AON CONTRARIO
void splitMS (LInt l, int x, LInt *mx, LInt *Mx){
    
    while (l!=NULL){
        if (l->valor<x)
            *mx=newLInt(l->valor,*mx);
        else *Mx=newLInt(l->valor,*Mx);
        l=l->prox;
    }
}



//ex9 BUG SEGMENTATION FAULT
LInt parteAmeio (LInt *l){
    
    LInt aux=*l;
    int len,i;
    
    while (aux!=NULL){
        len++;
        aux=aux->prox;
    }//& de aux fica no ultimo
    aux=*l; //inicio 8oo
    
    for(i=0; i<1+len/2; i++)
        l=&(*l)->prox;//& de l fica no meio da lista (+1 se impar)
    
    for(i=0; i<len/2; i++)
        aux=aux->prox;
    aux->prox=NULL;
    
    return aux;    
}



//10
int removeAll (LInt *l, int x){
    int n=0;
    
    while (*l!=NULL) {
        if ((*l)->valor==x){
            LInt aux = (*l)->prox;
            n++;
            free(*l);
            *l=aux;
        }
        else l=&(*l)->prox;
    }
        
    return n;
}



//13
void init (LInt *l){
    
    if (*l==NULL) return;
    
    while ((*l)->prox != NULL) {
        l=&(*l)->prox;
    }
    *l=NULL;
}



//ex18
int maximo (LInt l){
 
    int n;
    if (l!=NULL)
        n=l->valor;
    else return -1;   
    
    while (l->prox!=NULL){
        l=l->prox;
        if (n<l->valor)
             n=l->valor;
    }
    
    return n;
}



//ex27 BUG
LInt parte (LInt l){
    int n=1;
    LInt aux=l; //return
    LInt l2=l; //LInt param
    
    while (l!=NULL){
        
        if (n%2==0){    //par :: para return 
            aux->valor=l->valor;
            aux=aux->prox;
        }
        else{   //impar :: para LInt l
            l2->valor=l->valor;
            l2=l2->prox;
        }
        
        l=l->prox;
        n++;
    }
    l=l2;
    
    return aux;
}


int retiraNeg (int v[], int N) {
	
	int i;
	for (i = 0; i < N; i++) {
		while (v[i] > -1 && i >= 0) {
			v[i+1] = v[i];
			i++;
		} 
		v[i] = v[i+1];
		N--;
	}
	return n;



	int i;
	for(i=0; i<N; i++) {

		if (v[i]<0)

	}



}