#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of integers. Find the Inversion Count in the array.
// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

int merge(int a[], int temp[], int left, int mid, int right)
{
    int i, j, k, inv = 0;
    i = left;
    j = mid;
    k = left;

    while ((i <= mid - 1) and (j <= right))
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }

        else
        {
            temp[k++] = a[j++];
            inv += (mid - i);
        }
    }

    while (i <= mid - 1)
    {
        temp[k++] = a[i++];
    }

    while (j <= right)
    {
        temp[k++] = a[j++];
    }

    for (int m = left; m <= right; m++)
    {
        a[m] = temp[m];
    }

    return inv;
}

int mergeSort(int a[], int temp[], int left, int right)
{
    int inv = 0;

    if (left < right)
    {
        int mid = (left + right) / 2;

        inv += mergeSort(a, temp, left, mid);
        inv += mergeSort(a, temp, mid + 1, right);
        inv += merge(a, temp, left, mid + 1, right);
    }

    return inv;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int temp[n];

    cout << mergeSort(a, temp, 0, n - 1) << endl;

    return 0;
}
