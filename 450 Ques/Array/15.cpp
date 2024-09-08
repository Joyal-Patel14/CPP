#include <bits/stdc++.h>
using namespace std;

// Problem: Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

// The replacement must be in place and use only constant extra memory.

void rvereseArray(int arr[], int start, int end)
{
    for(int i=end; i>=start; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
   
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    // rvereseArray(a, 0, n-1);

    int idx = -1;

    for(int i=n-1; i>0; i--)
    {
        if(a[i] > a[i-1])
        {
            int idx = i;
            break;
        }
    }

    if(idx == -1)
    {
        rvereseArray(a, 0, n-1);
    }

    else
    {
        int nxg = idx;

        for(int i=idx+1; i<n; i++)
        {
            if(a[i] > a[idx-1] && a[i] <= a[nxg])
            {
                nxg = i;
            }
        }

        swap(a[idx-1], a[nxg]);

        rvereseArray(a, idx, n-1);
    }

    return 0;
}
