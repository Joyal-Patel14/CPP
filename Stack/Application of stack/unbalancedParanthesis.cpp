#include <iostream>
#include <stack>
using namespace std;

// To check the given set of paranthesis is balanced or not

bool balanceParanthesis(string s)
{
    stack<char> st;

    int n = s.size();

    bool ans = true;

    for(int i=0; i<n; i++)
    {
        
    }
    
    
}

int main()
{

    string s = "{[()]}";

    if(balanceParanthesis(s))
    {
        cout<<"Balanced paranthesis"<<endl;
    }

    else
    {
        cout<<"Unbalanced paranthesis"<<endl;
    }
    

    return 0;
}
