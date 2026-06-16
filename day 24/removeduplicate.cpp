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
    unordered_map<char,int> freq;
    int pos=0;
    for(int i=0;i<n;i++)
    {
       
        if(freq[s[i]]==0)
        {
            freq[s[i]]++;
            s[pos]=s[i];
            pos++;
        }
    }
    s.resize(pos);
    n=s.length();
    for(int i=0;i<n;i++)
    {
        cout << s[i];
    }

   
}