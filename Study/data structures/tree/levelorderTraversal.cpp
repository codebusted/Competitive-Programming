/* LEVEL ORDER TRAVERSAL of binary tree (using binary search tree)

Time complexity: O(n)
Space complexity: space complexity would depend on the tree structure
eg
> worst case: for a perfect binary tree, space complexity: O(n)
> best case: for a tree of n node of height n-1 (nax height), space complexity: O(1) 
> average case: for average case, space complexity: O(n)
*/

#include "BST.cpp"

#include <queue>

void levelOrder(Node* root) {
	if(root == NULL)
		return;
	std::queue<Node*> q; // queue of pointer to node
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
	Node* root = NULL;
	BST bst;
	bst.insert(&root, 10);
	bst.insert(&root, 20);
	bst.insert(&root, 5);
	bst.insert(&root, 15);
	bst.insert(&root, 30);
	bst.insert(&root, 25);

	levelOrder(root);

	return 0;
}