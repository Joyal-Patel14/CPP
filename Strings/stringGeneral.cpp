#include <iostream>
#include <string>
using namespace std;


int main(){

    //How to declare string
    string str = "ApniKaksha";
    cout<<str<<endl;

    string str2;
    cin>>str2;
    cout<<str2;
    
    string str1(5, 'n');
    cout<<str1<<endl;

    // How to declare with sentence
    string str;
    getline(cin, str);
    cout<<str<<endl;

    return 0;
} 
