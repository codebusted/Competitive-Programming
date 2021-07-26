/* PREORDER TRAVERSAL
Algorithm:
1. visit left subtree
2. visit root
3. visit right subtree
*/

#include "BST.cpp"

void preorder(Node* root) {
	if(root == NULL)
		return;
	cout << root->data << ' ';
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root) {
	if(root == NULL)
		return;
	inorder(root->left);
	cout << root->data << ' ';
	inorder(root->right);
}
/*note- inorder traversal of 'binary search tree gives a sorted list*/

void postorder(Node* root) {
	if(!root)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << ' ';
	return;
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

	/*preorder(root);
	cout << endl;

	inorder(root);
	cout << endl;*/

	postorder(root);
	cout << endl;

	return 0;
}