#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array and a value, find if there exists three numbers whose sum is equal to the given value

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    
    int target;
    cin >> target;

    for (auto &i : a)
    {
        cin >> i;
    }

    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;

        while (low < high)
        {
            int curr = a[i] + a[low] + a[high];

            if (curr == target)
            {
                found = true;
            }

            if (curr < target)
            {
                low++;
            }

            else
            {
                high--;
            }
        }
    }

    if (found)
    {
        cout << "True" << endl;
    }

    else
    {
        cout << "False" << endl;
    }

    return 0;
}
