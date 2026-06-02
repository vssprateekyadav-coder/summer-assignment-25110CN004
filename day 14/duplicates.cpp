#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int main()
{int n;
   
    cout << "enter the number of element";
 cin >> n;  
 vector<int> v(n);
 for(int i=0;i<n;i++)
 {
    cin >> v[i];
 } 
unordered_map<int,int> freq;
for(int i=0;i<n;i++)
{
    freq[v[i]]++;
}
for(auto it:freq )
{   if(it.second >1)
    {cout << it.first << " occurs " << it.second << " times\n";}
}
 
}