build : binaryTree.c binaryTree.h test.c
	gcc -g -Wall -o test binaryTree.c test.c 

run : build
	./test

clean : 
	rm ./test
