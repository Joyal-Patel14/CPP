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

// For insert at head in circular linked list

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

// For insert at tail in circular linked list

void insertAtTail(node *&head, int value)
{
    if (head == NULL)
    {
        insertAtHead(head, value);
        return;
    }
    node *n = new node(value);
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

// For delete last node in circular linked list

void deleteAtHead(node *&head)
{
    node *temp = head;

    while(temp->next != head)
    {
        temp = temp->next;
    }

    node *todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int pos)
{
    if(pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;

    while(count != pos-1)
    {
        temp = temp->next;
        count++;
    }

    node *toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}

// For displaying circular linked list

void display(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
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

    deletion(head, 1);
    display(head);

    return 0;
}
