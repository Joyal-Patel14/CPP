#include <bits/stdc++.h>
using namespace std;

// Problem: Given two sorted arrays, a[] and b[], the task is to find the median of these sorted arrays, in O(log n + log m) time complexity, when n is the number of elements in the first array, and m is the number of elements in the second array.

double findMedianSortedArrays(int a[], int b[], int n, int m)
{
    if(m < n) return findMedianSortedArrays(b, a, m, n);

    int n1 = n;
    int n2 = m;

    int low = 0, high = n1;

    while(low <= high)
    {
        int cut1 = (low+high) >> 1;
        int cut2 = (n1 + n2 + 1)/2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : a[cut1-1];
        int left2 = cut2 == 0 ? INT_MIN : b[cut2-1];

        int right1 = cut1 == n1 ? INT_MAX : a[cut1];
        int right2 = cut2 == n2 ? INT_MAX : b[cut2];

        if(left1 <= right2 && left2 <= right1)
        {
            if((n1 + n2)%2 == 0)
            {
                return (max(left1, left2) + min(right1, right2)) / 2.0;
            }

            else
            {
                return max(left1, left2);
            }
        }

        else if(left1 > right2)
        {
            high = cut1-1;
        }

        else
        {
            low = cut1 + 1;
        }
    }

    return 0.0;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+m);

    cout << findMedianSortedArrays(a, b, n, m) << endl;

    return 0;
}
