#include<stdio.h>
#include<stdlib.h>
#include "AVLTrees.h"

//Helper functions
Tree newTree(int item, Tree leftSubTree, Tree rightSubTree, int height){
	Tree t = malloc(sizeof(nodeType));
	if(t != NULL){
		t->elem = item;
		t->height = height;
		t->LC = leftSubTree;
		t->RC = rightSubTree;
	}
	
	return t;
}
void initializeTree(Tree *T){
	*T = NULL;
}

//sab just want to know who's the tallest 
int highestHeight(Tree x, Tree y){
	return(x->height > y->height)? x->height: y->height;
}

//to get the height difference between siblings
int heightDifference(Tree T){
	return (T->LC->height) - (T->RC->height);
}
////sab is still dumb so she does not know how to do this
//void balanceAVL(Tree *T);

//Rotations

//use left Rotate if your tree is skewed to the right 
//need: right subtree and its left subtree
void leftRotate(Tree *T){
	Tree trav = (*T)->RC;
	Tree temp = trav->LC;
	
	//rotation process (LORD PLEASE HELP IDK IF IM DOING IT RIGHT)
	temp = *T;
	(*T)->RC = temp;
	
	//increase height by adding using the highest height function
	//not sure about this bitaw but I've been seeing this everywhere
	(*T)->height = highestHeight((*T)->LC, (*T)->RC) + 1;
	trav->height = highestHeight(trav->LC, trav->RC) + 1;
	
	(*T) = trav;
}

//use left Rotate if your tree is skewed to the left
//need: left subtree and its right subtree
void rightRotate(Tree *T){
	Tree trav = (*T)->LC;
	Tree temp = trav->RC;
	
	//rotation process 
	temp = *T;
	(*T)->LC = temp;
	
	//increase height by adding using the highest height function
	(*T)->height = highestHeight((*T)->LC, (*T)->RC) + 1;
	trav->height = highestHeight(trav->LC, trav->RC) + 1;
	
	(*T) = trav;
}

//Tree Traversals
void preOrder(Tree T){
	printf("Preorder traversal:\n");
	printf("%d", T->elem);
	preOrder(T->LC);
	preOrder(T->RC);
}
void inOrder(Tree T){
	printf("Inorder traversal:\n");
	inOrder(T->LC);
	printf("%d",T->elem);
	inOrder(T->RC);
}
void postOrder(Tree T){
	printf("Postorder traversal:\n");
	postOrder(T->LC);
	postOrder(T->RC);
	printf("%d\n",T->elem);
}

//Operations
void insertElement(Tree *T, int item){
	if((*T) == NULL){
		//located the proper place to insert the node - as what wayne said
		printf("test\n");
		*T = newTree(item, NULL, NULL, 1);
	}else if((*T)->elem == item){
		printf("DILI PWEDE CUZ NO REPETITIONS!!!");
	}else{
		if(item< (*T)->elem){
			insertElement(&(*T)->LC, item);
		}else{
			insertElement(&(*T)->RC, item);
		}
		(*T)->height = highestHeight((*T)->LC, (*T)->RC) + 1;
	}
	
//	balanceAVL(T); pero wala pani nga code so standby sah
	
}
void deleteElement(Tree *T, int item);


