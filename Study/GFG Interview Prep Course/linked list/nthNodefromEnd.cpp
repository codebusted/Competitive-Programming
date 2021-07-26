// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert(int n);


 // } Driver Code Ends
//User function Template for C

//Function to find the data of nth node from the end of a linked list.
/*int getNthFromLast(struct Node *head, int n)
{
    // principle: nth from end = size-n+1 from start
    struct Node* temp = head;
    int size = 1;
    while(temp->next != NULL) {
      temp = temp->next;
      size++;
    }
    if(size < n)
      return -1;
    if(size == n)
      return head->data;

    temp = head;
    for(int i = 1; i < (size-n+1); i++) {
      temp = temp->next;
    }
    return temp->data;
}*/

int getNthFromLast(struct Node *head, int n) {
  struct Node* first = head, *second = head;
  while(n != 0) {
    if(first == NULL)
      return -1;
    first = first->next;
    n--;
  }
  while(first != NULL) {
    first = first->next;
    second = second->next;
  }
  return second->data;
}

// { Driver Code Starts.



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      int n,k;
      scanf("%d",&n);
      scanf("%d",&k);
      insert(n);
      int res = getNthFromLast(start,k);
      printf("%d\n",res);
    }
    return 0;

}


 void insert(int n)
 {   int value,i;
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 




  // } Driver Code Ends