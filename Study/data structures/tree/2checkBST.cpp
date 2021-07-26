
/* Check if a binary tree is binary search tree or not

Method II
time complexity: O(n)
*/

#include "BST.cpp"

#include <climits> // INT_MIN, INT_MAX

bool isBST(Node* node, int min, int max) {
	if(node == NULL)
		return true;
	if(node->data >= min && node->data < max
		&& isBST(node->left, min, node->data) && isBST(node->right, node->data, max));
		return true;
	return false;
}

int main(int argc, char const *argv[])
{
	Node* root = NULL;
	BST bst;
	bst.insert(&root, 10);
	bst.insert(&root, 20);
	bst.insert(&root, 5);
	bst.insert(&root, 15);
	bst.insert(&root, 30);
	bst.insert(&root, 25);

	cout << isBST(root, INT_MIN, INT_MAX) << endl;


	return 0;
}