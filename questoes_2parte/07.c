

void merge (LInt *r, LInt a, LInt b){
	while(a!=NULL && b!=NULL){
		//comparar e guardar em n
		int n;
		if(a->valor < b->valor){
			n=a->valor;
			a=a->prox;
		} 
		else{
			n=b->valor;
			b=b->prox;
		}
		//adicionar;
		(*r)=malloc(sizeof(LInt));
		(*r)->valor=n;
		r=&(*r)->prox;
	}
	while(a!=NULL){
		//adicionar;
		(*r)=malloc(sizeof(LInt));
		(*r)->valor=a->valor;
		r=&(*r)->prox;
		a=a->prox;

	}
	while(b!=NULL){
		//adicionar;
		(*r)=malloc(sizeof(LInt));
		(*r)->valor=b->valor;
		r=&(*r)->prox;
		b=b->prox;
	}
	(*r)=NULL;
}