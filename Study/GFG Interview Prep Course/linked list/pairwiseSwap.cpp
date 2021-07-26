// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to swap elements pairwise.

// INCOMPLETE
struct Node* pairwise_swap(struct Node* head)
{
    // your code here
    if(head == NULL || head->next == NULL)
        return head;
    /*Node *prev = head, *curr = head->next;
    head = curr;
    while(head != NULL && head->next != NULL) {
        Node* next = curr->next;
        curr->next = prev;

        prev->next = next->next;
        prev = next;
        curr = prev->next;
    }*/
    Node *prev = NULL, *curr = head, *sec, *next;
    head = head->next;
    while(curr != NULL && curr->next != NULL) {
        sec = curr->next;
        next = sec->next;
        sec->next = curr;
        curr->next = next;
        /*if(prev->next != NULL)
            prev->next = sec;
        prev = curr;*/
        curr = next;
    }


    return head;
}

// { Driver Code Starts.
void printList(struct Node* node) 
{ 
    while (node!=NULL) 
    { 
        printf("%d ", (node)->data); 
        node = (node)->next; 
    } 
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, l,firstdata;
        cin>>n;
        // taking first node of linked list
        cin>>firstdata;
        struct Node* head = new Node(firstdata);
        struct Node* tail = head;
        // taking remaining nodes of linked list
        for(int i = 1; i < n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        head =pairwise_swap(head);
        printList(head);
        cout << endl;
    }
}  // } Driver Code Ends