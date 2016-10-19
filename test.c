#include <stdio.h>
#include "binaryTree.h"


int main(int argc, char ** argv){
	int n = 4;
	int i;

	nodeptr root = NULL;

	
	for (i = 5; i < 20; i++){
		printf("adding %d\n",i);
		root = insert(root, i);
	}


	printf("Tree:\n");
	printTree(root);
	printf("\nDONE\n");
	freeTree(root);
	return 0;
}
