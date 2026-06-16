#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cout << "enter the string";
    getline(cin,s);
    if(s.empty())
    {
        cout << "empty string";
        return 0; 
    }
    int n=s.length();
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ' && s[i]!='\t')
        {
            s[pos]=s[i];
            pos++;
        }
    }
    s.resize(pos);
    
    cout << s;

}