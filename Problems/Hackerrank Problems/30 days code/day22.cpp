#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class BTS {
public:
	Node* insert(Node* root, int data) {
        if(root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if(data <= root->data){
                cur = insert(root->left, data);
                root->left = cur;
            }
            else{
                cur = insert(root->right, data);
                root->right = cur;
           }

           return root;
        }
    }
};

int main() {
    BTS myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }

    return 0;
}