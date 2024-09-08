#include <iostream>
using namespace std;

// For merging two sorted Linked List

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

// For merging two linked list

node *merge(node *head1, node *head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;

    while(p1 != NULL && p2 != NULL)
    {
        if(p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }

        else
        {
            p3->next = p2;
            p2 = p2->next;
        }

        p3 = p3->next;
    }

    while(p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while(p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummyNode->next;
}

// For merging two linked list by recursive method

node * recursiveMerge(node *head1, node *head2)
{
    if(head1 == NULL)
    {
        return head2;
    }

    if(head2 == NULL)
    {
        return head1;
    }

    node *result;
    if(head1->data < head2->data)
    {
        result = head1;
        result->next = recursiveMerge(head1->next, head2);
    }

    else
    {
        result = head2;
        result->next = recursiveMerge(head1, head2->next);
    }

    return result;
}

int main()
{

    node *head1 = NULL;
    node *head2 = NULL;

    int arr1[] = {1,4,5,7};
    int arr2[] = {2,3,6};

    for(int i=0; i<4; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    for(int i=0; i<3; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    display(head1);
    display(head2);

    // node *newhead = merge(head1, head2);
    node *newhead = recursiveMerge(head1, head2);
    display(newhead);

    return 0;
}
