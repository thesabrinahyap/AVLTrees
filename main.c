#include <stdio.h>
#include <stdlib.h>

#include "AVLTrees.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Tree puno;
	initializeTree(&puno);
	
	insertElement(&puno, 73);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 76);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 111);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 86);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 51);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 80);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 114);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 48);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 103);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 64);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 109);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 77);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 49);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 78);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n");
	insertElement(&puno, 71);
	printf("\nPost Order Traversal: \n");
	postOrder(puno);
	printf("\n\n");
	
	return 0;
}
