#include <iostream>
using namespace std;

// In doubltky Linked List node have previous ponter also so that we can move backward also

class node{

    public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// For inserting at head

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;

    if(head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

// For iserting at tail

void insertAtTail(node *&head , int val)
{
    if(head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

// For displaying

void display(node *&head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// For deleting

void deletionAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void deletion(node *&head, int pos)
{
    if(pos == 1)
    {
        deletionAtHead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    while(temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}



int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);
    deletion(head, 5);
    display(head);

    return 0;
}
