#include "avl.h"
#include <stdio.h>

Tree createTree(void) {
  return NULL;
}

void emptyTree(Tree t) {
  if (t==NULL)
    return;
  emptyTree(t->left);
  emptyTree(t->right);
  free (t);

}

//Empty tree implementada como postorder

void liberta(Tree t) {
	if (t)
		free(t);
}

void emptyTree1(Tree t) {
	postorder(t,liberta);
}

//

int treeSize(Tree t) {
  if (t==NULL)
    return 0;

  return (treeSize(t->left)+treeSize(t->right)+1);
}

int treeHeight(Tree t) {
	int l,r;

	if (t==NULL)
		return 0;

	l=treeHeight(t->left);
	r=treeHeight(t->right);
	if (l>r)
		return l+1;
	else return r+1;

}

int isEmpty(Tree t) {
  if (t==NULL)
    return 1;
  else return 0;
}

void preorder(Tree t, Func f) {
  if (t==NULL)
    return;
  f(t);
  preorder(t->left,f);
  preorder(t->right,f);
}

void inorder(Tree t, Func f) {
   if (t==NULL)
    return;

  inorder(t->left,f);
  f(t);
  inorder(t->right,f);
}

void postorder(Tree t, Func f) {
  if (t==NULL)
    return;

  postorder(t->left,f);
  postorder(t->right,f);
  f(t);
}

Tree searchTree(Tree t, TreeEntry e) {
  if (t==NULL)
    return(NULL);
  if (t->entry==e)
    return(t);
  else if (t->entry>e)
    return(searchTree(t->left,e));
  else return(searchTree(t->right,e));
}

Tree insertTree(Tree t, TreeEntry e, int *cresceu) {
  if (t==NULL){
    t=(Tree)malloc(sizeof(struct treenode));
    t->entry=e;
    t->right=NULL;
    t->left=NULL;
    t->bf=EH;
    *cresceu=1;
  }
  else if (e==t->entry) {
    printf("ERRO!");
  }
  else if (e>t->entry) {
    t=insertRight(t,e,cresceu);
  }
  else {
    t=insertLeft(t,e,cresceu);
  }
  return(t);
}

Tree insertRight(Tree t, TreeEntry e, int *cresceu) {
  t->right=insertTree(t->right,e,cresceu);
  if (*cresceu) {
    switch (t->bf) {
    case LH:
      t->bf=EH;
      *cresceu=0;
      break;
    case EH:
      t->bf=RH;
      *cresceu=1;
      break;
    case RH:
      t=balanceRight(t);
      *cresceu=0;
    }
  }
  return t;
}

Tree balanceRight(Tree t) {
  Tree aux;

  if (t->right->bf==RH) {
    // Rotacao simples a esquerda
    t=rotateLeft(t);
    t->bf=EH;
    t->left->bf=EH;
  }
  else {
    //Dupla rotacao
    t->right=rotateRight(t->right);
    t=rotateLeft(t);
    switch (t->bf) {
    case EH:
      t->left->bf=EH;
      t->right->bf=EH;
      break;
    case LH:
      t->left->bf=EH;
      t->right->bf=RH;
      break;
    case RH:
      t->left->bf=LH;
      t->right->bf=EH;
    }
    t->bf=EH;
  }
  return t;
}

Tree insertLeft(Tree t, TreeEntry e, int *cresceu) {
  t->left=insertTree(t->left,e,cresceu);
  if (*cresceu) {
    switch (t->bf) {
    case RH:
      t->bf=EH;
      *cresceu=0;
      break;
    case EH:
      t->bf=LH;
      *cresceu=1;
      break;
    case LH:
      t=balanceLeft(t);
      *cresceu=0;
    }
  }
  return t;
}

Tree balanceLeft(Tree t) {
  Tree aux;

  if (t->left->bf==LH) {
    //Rotacao simples a direita
    t=rotateRight(t);
    t->bf=EH;
    t->right->bf=EH;
  }
  else {
    //Dupla rotacao
    t->left=rotateLeft(t->left);
    t=rotateRight(t);
    switch (t->bf) {
    case EH:
      t->left->bf=EH;
      t->right->bf=EH;
      break;
    case RH:
      t->left->bf=LH;
      t->right->bf=EH;
      break;
    case LH:
      t->left->bf=EH;
      t->right->bf=RH;
    }
    t->bf=EH;
  }
  return t;
}

Tree rotateRight(Tree t) {
  Tree aux;

  if ((! t)||(! t->left)) {
    printf("Erro\n");
  }
  else {
    aux=t->left;
    t->left=aux->right;
    aux->right=t;
    t=aux;
  }

  return t;
}

Tree rotateLeft(Tree t) {
  Tree aux;

  if ((! t)||(! t->right)) {
    printf("Erro\n");
  }
  else {
    aux=t->right;
    t->right=aux->left;
    aux->left=t;
    t=aux;
  }

  return t;
}
