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

// 1->2->3->4->5->6->NULL   k=3
// 4->5->6->1->2->3->NULL

// For length of linked list

int length(node *head)
{
    node *temp = head;
    int l = 0;

    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }

    return l;
}

node *kappend(node *&head, int k)
{
    node *newTail;
    node *newHead;
    node *temp = head;

    int l = length(head);
    k = k % l;
    int count = 1;

    while (temp->next != NULL)
    {
        if (count == l - k)
        {
            newTail = temp;
        }

        if (count == l - k + 1)
        {
            newHead = temp;
        }

        temp = temp->next;
        count++;
    }

    newTail->next = NULL;
    temp->next = head;

    return newHead;
}

int main()
{

    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head, arr[i]);
    }

    display(head);

    node *newHead = kappend(head, 3);
    display(newHead);

    return 0;
}
