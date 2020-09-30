#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define NE 0
#define NIL -1

#define WHITE 0
#define GRAY 1
#define BLACK 2


typedef int WEIGHT;

struct edge{

	int dest;
	WEIGHT weight;
	struct edge *next;
};

typedef struct edge *GraphL[MAX];

typedef WEIGHT GRaphM[MAX][MAX];



int alcancavel(GraphL g, int o, int d) {

	int i, vis[MAX];
	
	for(i=0; i<MAX; vis[i++]=0);

	return (DFsearch_aux1(g,o,d,vis));
}

int DFsearch_aux1(GraphL g, int o, int d, int *v){

	int i;
	struct edge *p;
	v[o]=1;

	if (o==d) return 1;
	else {
		for(p=g[o]; p; p=p->next){

			if (!v[p->dest] && DFsearch_aux1(g,p->dest,d,v))
				return 1;
		}
	}

	return 0;

}

//####################

int DFsearch_aux1(GraphL g, int o, int d, int *v){

	int i;
	struct edge *p;
	v[o]=1;

	if(o==d) return 1;
	else{
		for(p=g[o]; p; p=p->next){
			if(!v[p->dest] && DFsearch_aux1(g,pp->dfest,d , v))
				return 1;


else{

	if (o==d) return 1;
	for(p=g[o]); p; p=p>-next;
}
		}
	}

}



int alcancaveis(Grpahl g, int o, int dd,d,d,d,d,d)

//####################






int alcancaveis(GraphL g, int o, int r[]){

	int i;

	for(i=0; i<MAX; r[i++]=0);

	return (DFsearch_aux2(g,o,r));
}

int DFsearch_aux2(GraphL g, int o, int *v){

	int i,num;
	struct edge *p;
	num=v[o]=1;

	for(p=g[o]; p; p=p->next){

		if (!v[p->dest])
			num+=DFsearch_aux2(g,p->dest,v);
	}

	return num;
}



//aula 20/12/2016 AEC TERÇA


void cc_aux(int p[][MAX], int i, int j, int c[], int *w) {

	int k = p[i][j];
	
	if (k==-1) return;

	cc_aux(p,i,k,c,w);

	c[*w]=k;
	(*w)++;
	cc_aux(p,k,j,c,w);

}