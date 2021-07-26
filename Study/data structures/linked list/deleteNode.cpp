#include "linkedList.cpp"

// delete node at nth position
void deleteNode(Node* *head, int n) {
	Node* temp1 = *head;
	for(int i = 0; i < n - 2; ++i)
		temp1 = temp1->next;
	// temp1 points to (n-1)th node
	Node* temp2 = temp1->next; // temp 2 points to nth node
	temp1->next = temp2->next; // remove pointer to nth node
	free(temp2); // free memory to nth node
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

	ll.display(head);

	int n;
	printf("Enter Position to be deleted: ");
	scanf("%d", &n);

	deleteNode(&head, n);

	ll.display(head);

	return 0;
}