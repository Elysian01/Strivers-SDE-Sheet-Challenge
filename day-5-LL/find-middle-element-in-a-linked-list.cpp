#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node *findMiddle(Node *head) {
    if (head == NULL || head-> next == NULL)
        return head;

    Node *slow=head, *fast=head->next;

    if (head->next->next == NULL)
        return head->next;
    
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->next;
}

