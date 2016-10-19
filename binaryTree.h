/*
 * BinaryTree.h
 * This file holds the methods needed to build a binary tree
 */
#ifndef BINARYTREE_H
#define BINARYTREE_H

// the binary tree node
struct node {
	struct node* left;
	struct node* right;
	int val;
	int count;
};

typedef struct node* nodeptr;

// Create a new node with a specific value and return a pointer to it
nodeptr newNode(int v);

// Add a node to a tree. Given a number, this method will parse the tree
// until it can place the value in a NULL node or increment a node's counter
// if the number already exists
nodeptr insert(nodeptr root, int n);

// Prints the tree recursively
void printTree(nodeptr root);

// Prints a specific node
void printNode(nodeptr n);

// Returns the memory from the node
void freeNode(nodeptr n);

// Returns the memory down-hill of the node (Entire tree if root is passed)
void freeTree(nodeptr r);


#endif



