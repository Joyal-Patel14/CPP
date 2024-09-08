#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string A and a dictionary of n words B, find out if A can be segmented into a space-separated sequence of dictionary words.

int dictionaryContains(string s)
{
    string dictionary[] = {"i", "like", "sam", "sung", "samsung", "mobile", "ice", "cream", "icecream", "man", "go", "mango"};

    int n = sizeof(dictionary)/sizeof(dictionary[0]);

    for(int i=0; i<n; i++)
    {
        if(dictionary[i].compare(s) == 0)
        {
            return true;
        }
    }
    return false;
}

bool wordBreak(string s)
{
    int size = s.size();
    
    if(size == 0)
    {
        return true;
    }

    bool dp[size + 1] = {false};    // This is dp array initialize with false
    
    for(int i=1; i<=size; i++)
    {
        if(dp[i] == false && dictionaryContains(s.substr(0, i)))
        {
            dp[i] = true;
        }

        if(dp[i] == true)
        {
            if(i == size)
            {
                return true;
            }

            for(int j=i+1; j<=size; j++)
            {
                if(dp[j] == false && dictionaryContains(s.substr(i, j-i)))
                {
                    dp[j] = true;
                }

                if(j == size && dp[j] == true)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    wordBreak(s) ? cout << "YES" << endl : cout << "NO" << endl;
    
    return 0;
}
