#include <iostream>
using namespace std;

// If in linked list the ppointers of two nodes points to same node then there is cycle in Linked List

// FLOYD'S ALGORITHM || HARE & TORTOIS ALGORITHM

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

// For making cycle in linked list

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }

        temp = temp->next;
        count++;
    }

    temp->next = startnode;
}

// for detecting cycle

bool detectCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

// For removing cycle

void removeCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    
    fast = head;
    while(slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makeCycle(head, 3);
    // display(head);

    cout << detectCycle(head) << endl;
    removeCycle(head);
    cout << detectCycle(head) << endl;
    display(head);

    return 0;
}
