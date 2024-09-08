#include <iostream>
using namespace std;

// check the given array is sorted or not using recursion

bool sorted(int arr[], int n)
{
    if (n == 1) // base case
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{

    int arr[] = {2, 4, 8, 6, 9};

    cout << sorted(arr, 5) << endl;

    return 0;
}
