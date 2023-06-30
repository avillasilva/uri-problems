#include <stdio.h>

struct node {
	int content;
	struct node *right;
	struct node *left;
};

struct searchBinaryTree {
	struct node *root;
};

struct node searchInTree(struct searchBinaryTree *tree, int value) {
	if((*tree).root == NULL) {
		return NULL;
	}

	search((*tree).root, value);
}

struct node search(struct node *n, int value) {

	if(n.content == value) {
		return node;
	} 

	struct node aux = search(n.left, value);

	if(aux.content != value) {
		aux = search(n.right, value);
	}

	return aux;
}

int main() {

	return 0;
}