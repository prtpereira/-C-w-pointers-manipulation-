

void mirror (ABin *a){
	if(*a!=NULL){
		mirror(&(*a)->esq);
		mirror(&(*a)->dir);
		ABin aux=(*a)->esq; // se nao guardar vou perder informaçao na proxima linha. (vou fazer a esq ==dir mas depois perco a arvore esq para fazer esq==dir)
		(*a)->esq=(*a)->dir;
		(*a)->dir=aux;
	}
}