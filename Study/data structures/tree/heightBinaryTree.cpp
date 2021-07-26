#include "BST.cpp"

class Features : public BST {
public:
	int findHeight(Node* root) {
		if(root == NULL) // empty tree
			return -1; 
		int l = findHeight(root->left);
		int r = findHeight(root->right);

		return std::max(l, r) + 1;
	}
};

int main(int argc, char const *argv[])
{
	Features bst;
	Node* root = NULL;

	bst.insert(&root, 10);
	bst.insert(&root, 20);
	bst.insert(&root, 30);
	bst.insert(&root, 5);
	bst.insert(&root, 15);

	cout << bst.findHeight(root) << endl;

	return 0;
}