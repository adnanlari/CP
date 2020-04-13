/*This is a function problem.You only need to complete the function given below*/
/* Following is the Linked list node structure */
/*struct Node
{
    int data;
    Node* next;
};*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
};
 void reorderList(struct Node* head) ;
/* Function to create a new Node with given data */
struct Node *newNode(int data)
{
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
void freeList(struct Node *head)
{
    struct Node* temp;
    while(head != NULL)
    {
        
        temp=head;
        head = head->next;
        free(temp);
    }
  
}
int main(void)
{
   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
       struct Node* temp,*head;
        cin>>n;
        cin>>x;
        head=newNode(x);
        temp=head;
        for(i=0;i<n-1;i++)
        {
            cin>>x;
            temp->next=newNode(x);
            temp=temp->next;
            }
       
        reorderList(head);
        printList(head);
freeList(head);
   }
   return 0;


}
Node* reverse(Node *head)
{
    if(head->next==NULL)
    return head;
    Node *h=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return h;
}
void reorderList(Node* head) 
{
    // Your code here
    if(head->next==NULL)
    return;
    Node *a1=head,*a2=head;
    while(a2!=NULL || a2->next!=NULL)
    {
        a1=a1->next;
        a2=a2->next->next;
    }
    a2=reverse(a1);
    a1=head;
    Node *c;
    Node *d;
    while(1)
    {
        c=a1->next;
        d=a2->next;
        a1->next=a2;
        if(c==NULL)
        break;
        a2->next=c;
        a1=c;
        a2=d;
    }
    // a1=head;
    // while(a1!=NULL)
    // {
    //     cout<<a1->data<<" ";
    //     a1=a1->next;
    // }
    // cout<<"\n";
    
}