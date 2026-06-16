#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string";
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            cout << "given string is not pallindrome";
            return 0;
        }
    }
    cout << "given string is pallindrome";
}