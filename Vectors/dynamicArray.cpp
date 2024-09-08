#include <iostream>
#include <vector>
using namespace std;

// vectors : they are dynamic arrays

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // 1 2 3
    }

    // Another way to iterate through vector

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " "; // 1 2 3
    }

    // Another way to print array by use of auto keyword

    for (auto element : v)
    {
        cout << element << " "; // 1 2 3
    }

    v.pop_back(); // 1 2

    vector<int> v2(3, 50); // 50 50 50

    // For swaping two vector array
    swap(v, v2);
    for (auto element : v)
    {
        cout << element << " "; // 50 50 50
    }
    cout << endl;

    for (auto element : v2)
    {
        cout << element << " "; // 1 2
    }

    return 0;
}
