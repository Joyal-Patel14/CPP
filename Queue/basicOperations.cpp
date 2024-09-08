#include <iostream>
using namespace std;

// QUEUE is data structure in which elements are first in first out

// Array implementation of queue

#define n 20

class queue
{

    int *arr;
    int front;
    int back;

    public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }

        back++;
        arr[back] = x;

        if (front = -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    queue q;
    int arr[] = {0, 1, 2, 3, 4, 5};

    for (int i = 0; i < 6; i++)
    {
        q.push(arr[i]);
    }

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}

// // Linked list implementation of queue

// #include <iostream>
// using namespace std;


// class node
// {
//     public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//         back = NULL;
//     }

//     void push(int x)
//     {
//         node *n = new node(x);

//         if (front == NULL)
//         {
//             front = n;
//             back = n;
//             return;
//         }

//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is empty" << endl;
//             return;
//         }

//         node *todelete = front;
//         front = front->next;

//         delete todelete;
//     }

//     int peek()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }

//         return front->data;
//     }

//     bool empty()
//     {
//         if (front == NULL)
//         {
//             return true;
//         }

//         return false;
//     }
// };

// int main()
// {
//     queue q;
//     int arr[] = {0, 1, 2, 3, 4, 5};

//     for (int i = 0; i < 6; i++)
//     {
//         q.push(arr[i]);
//     }

//     cout << q.peek() << endl;
//     q.pop();

//     cout << q.peek() << endl;
//     q.pop();

//     cout << q.peek() << endl;
//     q.pop();

//     cout << q.peek() << endl;
//     q.pop();

//     cout << q.peek() << endl;
//     q.pop();

//     cout << q.peek() << endl;
//     q.pop();

//     cout << q.empty() << endl;

//     return 0;
// }
