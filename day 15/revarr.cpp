#include<iostream>
#include<vector>
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
for(int i=0;i<n/2;i++)
{
    int temp=v[i];
    v[i]=v[n-1-i];
    v[n-1-i]=temp;
}
for(auto it:v)
{
    cout << it;
}
 
}