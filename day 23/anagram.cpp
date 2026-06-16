#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    string s1;
    cout << "enter the string1";
    getline(cin,s1);
     string s2;
    cout << "enter the string2";
    getline(cin,s2);
    if(s1.length()!=s2.length())
    {
        cout << "given strings are not anagrams";
        return 0; 
    }
    
    map<char,int> freq1;
    for(auto it:s1)
    {   
        freq1[it]++;
    }
    map<char,int> freq2;
    for(auto it:s2)
    {   
        freq2[it]++;
    }
    if(freq1==freq2)
    {
        cout << "given strings are anagrams";
        return 0;
    }
    cout << "given strings are not anagrams";

    

}