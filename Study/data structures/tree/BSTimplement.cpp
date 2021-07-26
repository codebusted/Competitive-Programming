
// binary search tree implementation
#include <iostream>

using std::cout;
using std::endl;

// BST Node
class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

class BTS {
public:
	Node* insert(Node* root, int data) {
		if(root == NULL)
			root = new Node(data); // create a root node and insert data in it
		else {
			if(data <= root->data) // (root->data) is equivalent to ((*root).data)
				root->left = insert(root->left, data); // recursive call to insert data in left subtree
			else
				root->right = insert(root->right, data); // recursive call to 
		}
		return root;
	}

	 // search function returns address of node from the heap where searched data is present
	Node* search(Node* root, int data) {
		if(root == NULL)
			return root;
		if(root->data == data)
			return root;
		else {
			if(data <= root->data)
				return search(root->left, data);
			else
				return search(root->right, data);
		}
	}
};

int main(int argc, char const *argv[])
{
	BTS tree;
	Node* root = NULL; // create a pointer to root node
	
	root = tree.insert(root, 15);
	root = tree.insert(root, 10);
	root = tree.insert(root, 20);
	root = tree.insert(root, 25);
	root = tree.insert(root, 8);
	root = tree.insert(root, 12);

	cout << tree.search(root, 8) << endl;
	cout << tree.search(root, 22) << endl;


	return 0;
}