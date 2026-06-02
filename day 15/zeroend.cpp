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
int pos=0;
for(int i=0;i<n;i++)
{
    if(v[i]!=0)
    {
        swap(v[pos],v[i]);
        pos++;
    }
}
for(int i=0;i<n;i++)
{
    cout << v[i] << " ";
}
}