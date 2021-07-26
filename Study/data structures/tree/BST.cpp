/*BINARY SEARCH TREE*/

#include <iostream>

using std::cout;
using std::endl;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int Data) {
		data = Data;
		left = NULL;
		right = NULL;
	}
};

class BST {
public:
	void insert(Node** rootptr, int data) { // 'rootptr' is pointer to root node pointer (address of root pointer)
		if(*rootptr == NULL)
			*rootptr = new Node(data);
		else {
			if(data <= (*rootptr)->data)
				insert(&((*rootptr)->left), data); // address of left node of the root node is passed
			else
				insert(&((*rootptr)->right), data); // address of left node of the root node is passed
		}
		return;
	}
};