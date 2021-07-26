/*
LINKED LIST IMPLEMENTATION and 
INSERTION at the front of the list
*/

#include <iostream>

using std::cout;
using std::endl;

class Node {
public:
	int data; // data in the node
	Node* next; // pointer to next node
};

class LinkedList {
public:
	// inserts a new node on the front of the linked list
	void pushFront(Node** head_ref, int data)  {// (refrence to head node (pointer pointing to the head pointer), data )
		// 1. create node
		Node* new_node = new Node();

		// 2. store data in the node
		new_node->data = data;

		// 3. make next of new node as head
		new_node->next = *head_ref;

		// 4. move the head to point to new node
		*head_ref = new_node;
	}

	void display(Node* head) {
		Node* start = head;
		while(start) {
			cout << start->data << ' ';
			start = start->next;
		}
		cout << endl;
	}
};

int main(int argc, char const *argv[])
{
	/*
	// pointer to head node
	Node* head = NULL; // since the list is empty pointer contains null

	// create node
	head = new Node(); // new allocates memory in heap and returns a pointer to that memory

	// initialize node
	head->data = 1;


	// new pointers nodes
	Node* second = NULL;
	Node* third = NULL;

	// allocate memory in heap
	second = new Node();
	third = new Node();

	head->next = second; // next of head stores address of second node (link first node to second)

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;
	*/

	Node* head = NULL;
	LinkedList ll;
	ll.pushFront(&head, 10);
	ll.pushFront(&head, 20);
	ll.pushFront(&head, 30);

	ll.display(head);

	return 0;
}