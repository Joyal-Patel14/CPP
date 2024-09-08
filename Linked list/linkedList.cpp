#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// insert at head

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// insert at tail

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

// for searching data

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// for displaying linked list

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// for deleting head

void deleteAtHead(node *&head)
{

    node *todelete = head;
    head = head->next;

    delete todelete;
}

// deleting in linked list

void deletion(node *&head, int val)
{
    if (head = NULL) // if our linked list is empty
    {
        return;
    }

    if (head->next = NULL) // if we have only one node
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    // display(head);

    insertAtHead(head, 4);
    display(head);

    // cout<<search(head, 3)<<endl;

    // deletion(head, 3);
    deleteAtHead(head);
    display(head);

    return 0;
}
