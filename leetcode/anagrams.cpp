#include <bits/stdc++.h>
using namespace std;

#define vs vector<string>

bool anagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2 ? true : false;
}

vector<string> removeAnagrams(vector<string> words)
{   
    int n = words.size();

    if(n<=1) return words;

    for(int i=1; i<words.size();i ++)
    {
        int j = i-1;
        if(anagrams(words[i],words[j])) 
        {
            words.erase(words.begin()+i);
            i--;
        }
    }

    return words;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<string> words = {"a", "b", "a"};

    vector<string> ans = removeAnagrams(words);

    for(int i=0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
