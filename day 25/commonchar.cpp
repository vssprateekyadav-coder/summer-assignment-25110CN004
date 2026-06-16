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
    string s1;
    cout << "enter the string1";
    getline(cin,s1);
    if(s1.empty())
    {
        cout << "no common character";
        return 0; 
    }
    int n=s.length();
    unordered_map<char,int> freq;
    for(int i=0;i<n;i++)
    {
        if(freq[s[i]]==0)
        {
            freq[s[i]]++;
        }
    }
    n=s1.length();
    cout << "common characters are:";
    bool print= false;
    for(int i=0;i<n;i++)
    {
        if(freq[s1[i]]==1)
        {
            cout << s1[i];
            print=true;
        }
    }
    if(print==false)
    {
        cout<< "no common characters";
        return 0;
    }
    

   
}