#include <stdio.h>
#include "binaryTree.h"


int main(int argc, char ** argv){
	int i, j;

	nodeptr root = NULL;

	for (i = 5; i < 20; i++){
		printf("adding %d\n",i);
		root = insert(root, i);

		for (j = i+3; j > -7; j--) root = insert(root, j);
	}

	printf("Attempt:\n");
	printTreeG(root, 0);
	printf("END\n");
	printf("Tree:\n");

	printTree(root);
	printf("\nDONE\n");
	freeTree(root);
	return 0;
}
