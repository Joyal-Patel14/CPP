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

// Insert at tail

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

// For displaying linked list

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

// Set lonked list such that nodes at odd position comes first than nodes at evn position
// example : 1->2->3->4->5->6 to 1->3->5->2->4->6

void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenstart = even;

    while(odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenstart;

    if(odd->next != NULL)
    {
        even->next = NULL;
    }
}

int main()
{

    node *head = NULL;
    int arr[] = {1,2,3,4,5,6};

    for(int i=0; i<6; i++)
    {
        insertAtTail(head, arr[i]);
    }

    display(head);
    evenAfterOdd(head);
    display(head);
    
    return 0;
}
