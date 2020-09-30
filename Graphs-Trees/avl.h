typedef int TreeEntry;

typedef enum balancefactor { LH , EH , RH } BalanceFactor;

typedef struct treenode TreeNode;

struct treenode {
  BalanceFactor bf;
  TreeEntry entry;
  TreeNode *left;
  TreeNode *right;
};

typedef TreeNode *Tree;

Tree createTree(void);
void emptyTree(Tree t);
void emptyTree1(Tree t);
int treeHeight(Tree t);
int treeSize(Tree t);
int isEmpty(Tree t);

typedef void (*Func)(Tree);

void preorder(Tree t, Func f);
void inorder(Tree t, Func f);
void postorder(Tree t, Func f);

Tree searchTree(Tree t, TreeEntry e);
Tree deleteTree(Tree t, TreeEntry e);
Tree insertTree(Tree t, TreeEntry e, int *cresceu);
Tree insertRight(Tree t, TreeEntry e, int *cresceu);
Tree balanceRight(Tree t);
Tree insertLeft(Tree t, TreeEntry e, int *cresceu);
Tree balanceLeft(Tree t);
Tree rotateLeft(Tree t);
Tree rotateRight(Tree t);

