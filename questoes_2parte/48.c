

void removeMaiorA (ABin *a){
	if(*a!=NULL){
	while((*a)->dir!=NULL) a=&(*a)->dir;
	*a=((*a)->esq);        // <- parte importante!! nao fazer *a=NULL para nao perder a informaçao da esquerda!
	}
}