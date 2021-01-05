// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends








/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

/* Function to mergesort the linked list
   It should return head of the modified list  */
Node* merge(Node* l1,Node* l2)
{
    if(!l1)
        return l2;
    if(!l2)
        return l1;

    if(l1->data<l2->data)
    {
        l1->next=merge(l1->next,l2);
        return l1;
    }
    else
    {
        l2->next=merge(l1,l2->next);
        return l2;
    }
}

Node* mergeSort(Node* head) {
    if(head==NULL || head->next==NULL)
        return head;

    Node* slow=head;
    Node* fast=head->next;

    while(fast && fast->next)
    {
    slow=slow->next;
    fast=fast->next->next;
    }

    Node* newHead=slow->next;
    slow->next=NULL;

    return merge(mergeSort(head),mergeSort(newHead));
}




void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}