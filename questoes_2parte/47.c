
int maiorAB (ABin a){
	if(a==NULL) return -1;   // o valor -1 esta predefenido(pelo professor) para quando ocorre este erro....
    while(a->dir!=NULL) a=a->dir;
	return a->valor;
}