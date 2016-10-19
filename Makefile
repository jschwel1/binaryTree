build : binaryTree.c binaryTree.h test.c
	gcc -g -Wall -o test test.c binaryTree.c

run : build
	./test

clean : test
	rm ./test
