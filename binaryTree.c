/*
 * BinaryTree.c
 * This file holds the methods needed to build a binary tree
 */
#include "binaryTree.h"
#include <stdio.h>
#include <stdlib.h>

nodeptr newNode(int v){
	nodeptr n = (nodeptr)malloc(sizeof(struct node));	
	n->count = 1;
	n->val = v;
	n->left = NULL;
	n->right = NULL;
	return n;
}	

nodeptr insert(nodeptr root, int n){
	if (root == NULL) return newNode(n);
	
	else if (n < root->val) root->left = insert(root->left, n);
	else if (n > root->val) root->right = insert(root->right, n);
	else if (n == root->val) root->count++;

	return root;
}

void printTree(nodeptr root){
	if (root == NULL) return;
	printTree(root->left);
	printNode(root);
	printTree(root->right);
	return;
}

void printTreeG(nodeptr root, int depth){
	if (root == NULL) return;
	printTreeG(root->left, depth+1);
	
	int i;
	for (i = 0; i < depth; i++) printf("    ");
	printNode(root);
	printf("\n");

	printTreeG(root->right, depth+1);
	return;
	
}

void printNode(nodeptr n){
	printf(" %d(%d) ",n->val,n->count);
	return;
}

void freeNode(nodeptr n){
	free(n);
}

void freeTree(nodeptr r){
	if (r == NULL) return;
	freeTree(r->left);
	freeTree(r->right);
	freeNode(r);
}
