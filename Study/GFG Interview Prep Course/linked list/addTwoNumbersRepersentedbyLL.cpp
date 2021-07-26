// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverseList(struct Node* head) {
        if(head == NULL)
            return head;
        struct Node* prev = NULL, *next, *curr;
        curr = head;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    // OWN SOLUTION (PARTIALLY CORRECT)
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverseList(first);
        second = reverseList(second);
        struct Node* sumlist = new Node(0);
        struct Node *curr1 = first, *curr2 = second, *curr = sumlist;
        int c = 0, temp;
        while(1) {
            if(curr1 == NULL && curr2 == NULL) {
                break;
            }
            else {
                if(curr1 != NULL && curr2 != NULL) {
                    temp = curr1->data + curr2->data + c;
                    curr1 = curr1->next;
                    curr2 = curr2->next;
                }
                else if(curr1 != NULL && curr2 == NULL) {
                    temp = curr1->data + c;
                    curr1 = curr1->next;
                }
                else {
                    temp = curr2->data + c;
                    curr2 = curr2->next;
                }
                curr->data = temp % 10;
                c = temp / 10;
                struct Node* newn = new Node(0);
                curr->next = newn;
                curr = curr->next;
            }
        }
        sumlist = reverseList(sumlist);
        while(1) {
            if(sumlist->data == 0) {
                struct Node* x = sumlist;
                sumlist = sumlist->next;
                delete(x);
            }
            else
                break;
        }
        return sumlist;
    }
};




// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends