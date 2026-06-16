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
    {
        freq[it]++;
    }
    for(auto p:freq)
    {
        cout << "frequency of"<<p.first<<" = "<< p.second << "\n";
    }
    
    

}