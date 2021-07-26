#include <iostream>
#include "linkedList.cpp"

// print all elements of linked list (using recursive method)
void printLL(Node* head) {
	if(head == NULL) {
		cout << endl;
		return;
	}
	cout << head->data << ' ';
	printLL(head->next);
	return;
}

// print elements in reverse order (using recursion)
void printReverseLL(Node* head) {
	if(head == NULL) {
		return;
	}
	printReverseLL(head->next);
	cout << head->data << ' ';
	return;
}

int main(int argc, char const *argv[])
{
	Node* head = NULL;

	LinkedList ll;
	ll.append(&head, 2);
	ll.append(&head, 4);
	ll.append(&head, 6);
	ll.append(&head, 5);

	printLL(head);
	printReverseLL(head);

	return 0;
}