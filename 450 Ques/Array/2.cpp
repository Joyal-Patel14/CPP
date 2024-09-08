#include <bits/stdc++.h>
using namespace std;

// Problem: Find the maximum and minimum element of array with minimum number of comparisons

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[n];
    }

    int min, max;

    if(n == 1)
    {
        min = a[0];
        max = a[0];

        cout << max << " " << min << endl;
        return 0;
    }

    if(a[0] > a[1])
    {
        max = a[0];
        min = a[1];
    }

    else
    {
        max = a[1];
        min = a[0];
    }

    for(int i=2; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        else if(a[i] < min)
        {
            min = a[i];
        }
    }

    cout << max << " " << min << endl;

    return 0;
}

// EDITORIAL

struct Pair
{
    int min;
    int max;
};
 
struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;    
    int i;

    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];    
        return minmax;
    }
     

    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
     
    for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
    }
    return minmax;
}
 

int main()
{
    int arr_size;
    cin >> arr_size;

    int arr[arr_size];

    for(int i=0; i<arr_size; i++)
    {
        cin >> arr[i];
    }
     
    struct Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}
