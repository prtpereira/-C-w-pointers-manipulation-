

int removeMaiorL (LInt *l){
	LInt *ptr; // apontador para o maior elemento (que vai ser eliminado)!
	if((*l)!=NULL) ptr=l; //inicializar com o primeiro elemento
	while(*l!=NULL){
		//comparar com o resto da lista
		if((*l)->valor > (*ptr)->valor) ptr=l;
		l=&(*l)->prox;
	}
	//eliminar o maior guardando o seu valor para retorno
	int ret=(*ptr)->valor;
	LInt aux=(*ptr)->prox;
	free(*ptr);
	*ptr=aux;
	return ret;
}