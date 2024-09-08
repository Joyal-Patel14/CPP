#include <bits/stdc++.h>
using namespace std;

// STL: Standard Template Library

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{
    priority_queue<int, vector<int>> pq; // MAXHEAP
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pqm; // MINHEAP
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);

    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl;

    // Time complexity for:
    // push = O(log(n))
    // pop = O(log(n))
    // top = O(1)
    // size = O(1)

    return 0;
}
