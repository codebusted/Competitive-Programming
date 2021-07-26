#include <iostream>
#include "linkedList.cpp"

// INTERATIVE METHOD
void reverseLL(Node* *head) {
	Node *curr, *prev = NULL, *next;
	curr = *head;
	while(curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return;
}

// RECURSIVE METHOD
Node* reverseLL2(Node* head) {
	if(head == NULL || head->next == NULL)
		return head;
	Node* rest = reverseLL2(head->next);
	head->next->next = head;
	head->next = NULL;
	return rest;
}

int main(int argc, char const *argv[])
{
	Node* head = NULL;

	LinkedList ll;
	ll.append(&head, 2);
	ll.append(&head, 4);
	ll.append(&head, 6);
	ll.append(&head, 5);

	ll.display(head);

	// reverseLL(&head);
	head = reverseLL2(head);

	ll.display(head);

	return 0;
}