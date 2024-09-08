#include <iostream>
using namespace std;

// Iterative method
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

// Recursive method
int bsR(int a[], int key, int low, int high)
{
    if (low > high) return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key) return mid;

    if (key > a[mid]) return bsR(a, key, mid+1, high);

    return bsR(a, key, low, mid-1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;

    cout << bsR(arr, key, 0, n) << endl;

    return 0;
}
