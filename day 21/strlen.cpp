#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string";
    getline(cin,s);
    int l=0;
    for(auto it:s)
    {
        l++;
    }
    cout << "length of string is = " << l;
}