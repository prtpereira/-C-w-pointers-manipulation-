//teste  de 17 de junho 2015

    //parte A

//exercicio 1 Esta mal! teste -> https://codeboard.io/projects/14493 

char * strstr (char s1[], char s2[]){
    int flag=1;
	int i,j;
	char *res=NULL;
	if(s1[0]=='\0' && s2[0]=='\0') res=s1;
	for (i=0; s1[i]!='\0'&& flag ; i++ ){
		if( s1[i] == s2[0] ){
			for(j=0 ; s1[i+j]!='\0'; j++){
				if(s2[j]=='\0')  flag=0;
				if(s1[i+j]!=s2[j]) break;
			}
			if(flag==0)
				res=s1+i;
		}
	}
	return res;
} 
//exercicio 2  //testado e funciona

int maxInd (int v[], int n){
	int i;
	int maior=v[0];
	int res=0;
	for(i=0;i<n;i++){
		if(v[i]>maior){
			maior=v[i];
			res=i;
		} 
	}
	return res;
}

//exercicio 3  // NAO testado

void concat (LInt *a, LInt b){
	if(b==NULL) b=*a;
	while(b->prox!=NULL) b=b->prox;
	b->prox=*a;
}

//exercicio 4  teste em -> https://codeboard.io/projects/16277

LInt nivel (ABin a, int n){

}

		// PARTE B

//exercicio 1  // testado e funciona

int existe(int v[],int n,int x){
	int res=0;
	int i;
	for(i=0;i<n;i++){
		if(x==v[i]){
			res=1;
			break;
		}
	}
	return res;
}

int main(){
	int v[100];
	int n=0;
	int flag=1;
	int x;
	while(flag && n<100){
		printf("digite um numero:\n");
		scanf("%d",&x);
		if(existe(v,n,x)){
			flag=0;
		}else v[n]=x;
		n++;
	}
	x=maxInd(v,n);
	printf("O maior numero é: %d\n",v[x]);
	return 0;
}

//exercicio 2

typedef struct strlist {
	char *string;
	struct strlist *prox;
} *StrList;

// a) NAO testado


int add(char t[], int N, char s[]){
	int i;
	for(i=0;i<N;i++){
		t[i]=s[i];
	}
	return i;
}

void unwords (StrList s, char t[], int N){
	int count=0;
	N--; //guardar espaço para o /n
	while(s!=NULL && count<N){
		count+=add(t,N-count,s->strstr);
		if(count<N){
		 	t[count]=' ';
		 	count++; 
		}
		s=s->prox;
	}
	t[count]='\n';
}



//  exercicio 3  testado e funciona

int existe(int s[],int n,int x){
	int i;
	int res=0;
	for(i=0;i<n;i++) {
		if(s[i]==x){
			res=1;
			break;
		}
	}
	return res;
}

int maxuniqueseq (int v[], int N){
	int i=0;               
	int res=0;            //vai ser o valor de retorno  
	int temp=0;   		 //para comparar com res e ver qual o maior
	while(i<N){
		if(existe(v,i,v[i])){
			if(temp>res)res=temp;
			v++;
			temp=1;
		}else{
			temp++;
			i++;
		}
	}
	if(temp>res) res=temp; //caso a maior sequencia esta no fim
	return res;
}
