#include <stdio.h>
#include <stdlib.h>
#include "AVLTrees.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Tree puno;
	initializeTree(&puno);
	
	insertElement(&puno, 10);
	insertElement(&puno, 20);
	insertElement(&puno, 30);
	postOrder(puno);
	insertElement(&puno, 40);
	postOrder(puno);
	insertElement(&puno, 50);
	postOrder(puno);
	return 0;
}
