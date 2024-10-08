#include <bits/stdc++.h>
using namespace std;

// Problem: Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

void findCommon(int a[], int b[], int c[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2 && k < n3)
    {
        if(a[i] == b[j] && b[j] == c[k])
        {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }

        else if(a[i] < b[j])
        {
            i++;
        }

        else if(b[j] < c[k])
        {
            j++;
        }

        else
        {
            k++;
        }
    }
}


int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a[n1];
    int b[n2];
    int c[n3];

    for(int i=0; i<n1; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n2; i++)
    {
        cin >> b[i];
    }

    for(int i=0; i<n3; i++)
    {
        cin >> c[i];
    }

    findCommon(a, b, c, n1, n2, n3);

    return 0;
}
