
// Check if a binary tree is binary search tree or not

// Method I: very expensive method
#include "BST.cpp"

bool isSubtreeLess(Node* node, int val) {
	if(!node)
		return true;
	if(node->data <= val && isSubtreeLess(node->left, val) 
		&& isSubtreeLess(node->right, val))
		return true;
	return false;
}

bool isSubtreeGreater(Node* node, int val) {
	if(!node)
		return true;
	if(node->data > val && isSubtreeGreater(node->left, val) 
		&& isSubtreeGreater(node->right, val))
		return true;
	return false;
}

bool isBST(Node* node) {
	if(node == NULL)
		return true;
	if(isSubtreeLess(node->left, node->data) && isSubtreeGreater(node->right, node->data) 
		&& isBST(node->left) && isBST(node->right));
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

	cout << isBST(root) << endl;


	return 0;
}