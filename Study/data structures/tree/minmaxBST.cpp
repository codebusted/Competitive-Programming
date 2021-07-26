#include "BST.cpp"

class Features : public BST {
public:
	// ITERATIVE SOLUTION
	int findMin(Node* root) {
		if(root == NULL) {
			cout << "Error: list empty." << endl;
			return -1;
		}
		Node* curr = root;
		while(curr->left != NULL)
			curr = curr->left;
		return curr->data;
	}
	int findMax(Node* root) {
		if(root == NULL) {
			cout << "Error: list empty." << endl;
			return -1;
		}
		Node* curr = root;
		while(curr->right != NULL)
			curr = curr->right;
		return curr->data;
	}

	// RECURSIVE SOLUTION
	int findMin1(Node* root) {
		if(root == NULL) {
			cout << "Error: list empty." << endl;
			return -1;
		}
		if(root->left == NULL)
			return root->data;
		return findMin(root->left);
	}
	int findMax1(Node* root) {
		if(root == NULL) {
			cout << "Error: list empty." << endl;
			return -1;
		}
		if(root->right == NULL)
			return root->data;
		return findMax(root->right);
	}
};

int main(int argc, char const *argv[])
{
	Features bst;
	Node* root = NULL;
	bst.insert(&root, 10);
	bst.insert(&root, 20);
	bst.insert(&root, 30);

	cout << bst.findMax(root) << endl;
	cout << bst.findMin(root) << endl;

	return 0;
}