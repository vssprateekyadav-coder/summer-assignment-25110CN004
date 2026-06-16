#include<iostream>
#include<string>
#include<unordered_map>
#include<set>
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
    int max=0;
    set<char> mr;
    for(auto it:s)
    {   if(!isalpha(it))
        {
            continue;
        }
       if(freq[it]>max)
       {
        mr.clear();
        mr.insert(it);
        max=freq[it];
       }
       else if(freq[it]==max )
       {
        mr.insert(it);
       }
    }
    cout << "maximum frequency is "<< max <<" and elements having this frequency are \n";
    for(auto it:mr)
    {
        cout << it << " ";
    } 

}