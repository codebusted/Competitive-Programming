#include <iostream>

using std::cout;
using std::endl;

class Node {
public:
	int data;
	Node* next;

	Node(int Data) {
		data = Data;
		next = NULL;
	}
};

class LinkedList {
public:
	// insert element at the end of linked list
	void append(Node** head, int data) {
		Node* newNode = new Node(data);
		if(*head == NULL) {
			*head = newNode;
			return;
		}
		Node* curr = *head;
		while(curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = newNode;
		return;
	}

	void display(Node* head) {
		Node* curr = head;
		while(curr) {
			cout << curr->data << ' ';
			curr = curr->next;
		}
		cout << endl;
	}
};