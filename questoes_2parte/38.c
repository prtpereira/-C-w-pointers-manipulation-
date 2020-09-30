#include "abin.h"

/* Defina uma função "LInt nivelL (ABin a, int n)" que, dada uma árvore
 binária, constrói uma lista com os valores dos elementos que estão armazenados
 na árvore ao nível "n" (assuma que a raiz da árvore está ao nível "1").  */
LInt nivelL (ABin a, int n) {
    LInt new=NULL;
    LInt *pt=&new;  // para percorrer a lista
    if(n==1 && a!=NULL){   // so adiciona o elemento a lista (caso de paragem ( nao tem recursividade))
        *pt=(LInt)malloc(sizeof(struct lligada));
        (*pt)->valor=a->valor;
        (*pt)->prox=NULL;
    }
    if(n>1 && a!=NULL){  // recursividade para procurar o caso de cima! 
        *pt=nivelL(a->esq,n-1);  //adiciona todos elementos da esquerda
        while((*pt)!=NULL) pt=&(*pt)->prox;  //procura o fim da lista
        *pt=nivelL(a->dir,n-1); //e adiciona no fim os elementos da direira
    }
    return new; // na linha 7 inicializamos o new com NULL so para o caso de a==NULL ( se so fizermos "LInt new;" vai fazer retorno de algo aleatorio)
}