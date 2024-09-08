// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int maxsum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)                     // Time complexity = O(n3)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             maxsum = max(maxsum, sum);
//         }
//     }

//     cout << maxsum << endl;

//     return 0;
// }

//          CUMULATIVE SUM APPROACH            //

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int currentSum[n + 1];
//     currentSum[0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         currentSum[i] = currentSum[i - 1] + arr[i - 1];           //Time complexity = O(n2)
//     }

//     int maxSum = INT_MIN;
//     for (int i = 1; i <= n; i++)                         
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = currentSum[i] - currentSum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum;

//     return 0;
// }



//                KADAN'S ALGORITHM                 //

#include <iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++)                //Time Complexity = O(n)
    {
        currentSum += arr[i];
        if(currentSum<0)
        {
            currentSum = 0;
        }

        maxSum = max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    


    return 0;
}
