#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

// PROBLEM: You are given a 0-indexed integer array nums, where nums[i] is a digit between 0 and 9 (inclusive).

// The triangular sum of nums is the value of the only element present in nums after the following process terminates:

// 1. Let nums comprise of n elements. If n == 1, end the process. Otherwise, create a new 0-indexed integer array newNums of length n - 1.
// 2. For each index i, where 0 <= i < n - 1, assign the value of newNums[i] as (nums[i] + nums[i+1]) % 10, where % denotes modulo operator.
// 3. Replace the array nums with newNums.
// 4. Repeat the entire process starting from step 1.

int triangularSum(vi v)
{
    // By recursion
    int n = v.size();

    if (n == 1) return v[0];

    vi newV(n - 1);

    for (int i = 0; i < n - 1; i++) newV[i] = (v[i] + v[i + 1]) % 10;
    
    return triangularSum(newV);

    // Without recursion
    while (v.size() >= 1)
    {
        vi newNums(v.size() - 1);

        for (int i = 0; i < v.size() - 1; i++) newNums[i] = (v[i] + v[i + 1]) % 10;
        
        v = newNums;
    }

    return v[0];
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    vi v = {1, 2, 3, 4, 5};

    cout << triangularSum(v) << endl;

    return 0;
}
