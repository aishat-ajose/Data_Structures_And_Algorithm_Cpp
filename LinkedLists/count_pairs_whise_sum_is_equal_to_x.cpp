// https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}

int countPairs(struct Node* head1, struct Node* head2, int x);

int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        cout << countPairs(head1, head2, x) << '\n';
    }
    return 0;
}

int countPairs(struct Node* head1, struct Node* head2, int x) {
    int count = 0;
    unordered_set<int> s;
    struct Node* ptr1 = head1;
    struct Node* ptr2 = head2;
    
    while(ptr1 != NULL) {
        s.insert(x -(ptr1->data));
        ptr1 = ptr1->next;
    }
    
    
    while(ptr2 != NULL) {
        if(s.find(ptr2->data) != s.end()) {
            count++;
        }
        ptr2 = ptr2->next;
    }
    
    return count;
}