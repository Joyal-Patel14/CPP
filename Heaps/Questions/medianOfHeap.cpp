#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

// Median of running stream
// Problem: Numbers are coming and we have to tell median of each input

priority_queue<int, vector<int>, greater<int>> pqmin;
priority_queue<int, vector<int>> pqmax;

void insert(int x)
{
    if (pqmax.size() == pqmin.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }

        if (x < pqmax.top())
        {
            pqmax.push(x);
        }

        else
        {
            pqmin.push(x);
        }
    }

    else
    {
        // Twon cases are possible
        // case 1: size of maxHeap > size of minHeap
        // case 2: size of maxHeap < size of minHeap

        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top())
            {
                pqmin.push(x);
            }

            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }

        else
        {
            if (x <= pqmin.top())
            {
                pqmax.push(x);
            }

            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findMedian()
{
    if (pqmin.size() == pqmax.size())
    {
        return (pqmax.top() + pqmin.top()) / 2.0;
    }

    else if (pqmax.size() > pqmin.size())
    {
        return pqmax.top();
    }

    else
    {
        return pqmin.top();
    }
}

signed main()
{
    int arr[] = {10, 15, 21, 30, 18, 19};

    for (int i = 0; i < 6; i++)
    {
        insert(arr[i]);
        cout << findMedian() << endl;
    }

    return 0;
}
