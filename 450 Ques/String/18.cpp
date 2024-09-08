#include <bits/stdc++.h>
using namespace std;

// Problem: Rabin Karp algorithm

#define d 256
int prime = 101;    // Prime number

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string text, pat;
    cin >> text;
    cin >> pat;

    int m = text.size();
    int n = pat.size();

    int p = 0;  // Hash value for pattern
    int t = 0;  // Hash value for text
    int h = 1;

    int i, j;

    // Value of h would be "pow(d, m-1) % prime"
    for(i=0; i<m-1; i++)
    {
        h = (h * d) % prime;
    }

    // Calculate the hash value of pattern and first window of text
    for(i=0; i<m; i++)
    {
        p = (d * p + pat[i]) % prime;
        t = (d * t + text[i]) % prime;
    }

    // Slide the pattern over text one by one
    for(i=0; i<=n-m; i++)
    {
        if(p == t)
        {
            bool flag = true;

            for(j=0; j<m; j++)
            {
                if(text[i+j] != pat[j])
                {
                    flag = false;
                    break;
                }

                if(flag)
                {
                    cout << i << " ";
                }
            }

            // If hash values are equal and characters are also same
            if(j == m)
            {
                cout << "Pattern found at index: " << i << endl;
            }

            // Calculate hash value for next window of text
            // Remove leading digit and add trailing digit
            if(i < n-m)
            {
                t = (d * (t - text[i] * h) + text[i+m]) % prime;

                if(t < 0)
                {
                    t = t + prime;
                }
            } 
        }
    }

    return 0;
}
