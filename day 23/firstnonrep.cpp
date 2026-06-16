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
    
    unordered_map<char,int> freq;
    for(auto it:s)
    {   if((it>='a'&&it<='z')||(it>='A' && it<='Z'))
        freq[it]++;
    }
    for(auto it:s)
    {
        if(freq[it]==1)
        {
            cout << "first non repeating character is ("<< it <<")";
            return 0;
        }
    }
    cout<<"each character has repeated at least once";

}