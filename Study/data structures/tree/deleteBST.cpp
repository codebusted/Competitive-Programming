
// delete a node from BST
/* three cases:
1. no child -leaf node
2. one child
3. two children

case 2 algo: (reduce case 3 to case 2 or 1)
i find min in right subtree
ii copy the value in targetted node
iii delete duplicate from right subtree

or
i find max in left subtree
ii copy the value in targetted node
iii delete duplicate from left subtree
*/

#include "BST.cpp"

#include <queue>

Node* findMin(Node* root) {
	if(root == NULL)
			return root;
		if(root->left == NULL)
			return root;
		return findMin(root->left);
}

Node* Delete(Node* root, int data) {
	if(root == NULL)
		return root;
	else if(data < root->data)
		root->left = Delete(root->left, data); // reduced to deleting data from left subtree
	else if(data > root->data)
		root->right = Delete(root->right, data); // reduced to deleting data from right subtree
	else { // found node to be deleted

		// case i: no children
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}

		// case ii: 1 child
		else if(root->left == NULL) {
			Node* temp = root;
			root = root->right;
			delete temp; // clear heap memory
		}
		else if(root->right == NULL) {
			Node* temp = root;
			root = root->left;
			delete temp; // clear heap memory
		}

		// case iii: 2 child
		else {
			Node* min = findMin(root->right);
			root->data = min->data;
			root->right = Delete(root->right, min->data);
		}
	}
	return root;
}

// used to check if the node is deleted in the tree
void levelOrder(Node* root) {
	if(root == NULL)
		return;
	std::queue<Node*> q;
	q.push(root);
	while(!q.empty()) {
		Node* curr = q.front();
		cout << curr->data << ' ';
		if(curr->left != NULL)
			q.push(curr->left);
		if(curr->right != NULL)
			q.push(curr->right);
		q.pop();
	}
}

int main(int argc, char const *argv[])
{
	BST bst;
	Node* root = NULL;

	bst.insert(&root, 12);
	bst.insert(&root, 5);
	bst.insert(&root, 17);
	bst.insert(&root, 3);
	bst.insert(&root, 7);
	bst.insert(&root, 13);
	bst.insert(&root, 20);
	bst.insert(&root, 1);
	bst.insert(&root, 9);
	bst.insert(&root, 14);
	bst.insert(&root, 18);
	bst.insert(&root, 8);
	bst.insert(&root, 11);

	root = Delete(root, 17);
	levelOrder(root);

	return 0;
}