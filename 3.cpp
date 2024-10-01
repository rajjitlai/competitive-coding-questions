#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* next;
    Node(int x) {
        key = x;
        next = NULL;
    }
};

int mergedHead(Node* h1, Node* h2) {
    Node* t1 = h1;
    Node* t2 = h2;
    Node* result = new Node(0);
    if (t1->key <= t2->key) {
        result->key = t1->key;
        t1 = t1->next;
    } else {
        result->key = t2->key;
        t2 = t2->next;
    }
    Node* temp = result;
    while (t1 != NULL && t2 != NULL) {
        if (t1->key <= t2->key) {
            Node* a = t1;
            temp->next = a;
            temp = temp->next;
            t1 = t1->next;
        } else {
            Node* a = t2;
            temp->next = a;
            temp = temp->next;
            t2 = t2->next;
        }
    }
    while (t1 != NULL) {
        temp->next = t1;
        temp = temp->next;
        t1 = t1->next;
    }
    while (t2 != NULL) {
        temp->next = t2;
        temp = temp->next;
        t2 = t2->next;
    }
    return result->key;
}

int main () {
    Node* head1 = new Node(6);
    Node* a1 = new Node(7);
    Node* a2 = new Node(8);
    head1->next = a1;
    a1->next = a2;
    
    Node* head2 = new Node(5);
    Node* b1 = new Node(7);
    Node* b2 = new Node(9);
    head2->next = b1;
    b1->next = b2;
    cout << mergedHead(head1, head2) << endl;    
}