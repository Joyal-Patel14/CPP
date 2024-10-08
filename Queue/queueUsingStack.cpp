#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty() and s2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topval = s2.top();
        s2.pop();

        return topval;
    }

    bool empty()
    {
        if (s1.empty() and s2.empty())
        {
            return true;
        }

        return false;
    }
};

int main()
{
    queue q;

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        q.push(arr[i]);
    }

    cout << q.pop() << endl;

    q.push(6);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}

// Second approach usning call stack

#include <iostream>
#include <stack>
using namespace std;

class queue
{
    stack<int> s1;

    public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }

        int item = pop();
        s1.push(x);
        return item;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }

        return false;
    }
};

int main()
{
    queue q;

    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        q.push(arr[i]);
    }

    cout << q.pop() << endl;

    q.push(6);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}