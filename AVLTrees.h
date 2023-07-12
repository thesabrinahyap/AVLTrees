#ifndef AVLTREES_H
#define AVLTREES_H

typedef struct node{
	int elem;
	struct node *LC;
	struct node *RC;
	int height;
}nodeType, *Tree;

//Helper functions
Tree newTree(int item, Tree leftSubTree, Tree rightSubTree, int height);
void initializeTree(Tree *T);
int heightDifference(Tree T);
void balanceAVL(Tree *T);

//Rotations
void leftRotate(Tree *T);
void rightRotate(Tree *T);

//Tree Traversals
void preOrder(Tree T);
void inorder(Tree T);
void postOrder(Tree T);

//Operations
void insertElement(Tree *T, int item);
void deleteElement(Tree *T, int item);

#endif
