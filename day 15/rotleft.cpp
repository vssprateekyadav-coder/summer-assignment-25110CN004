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
int k;
cout << "enter the number of rotations";
cin >> k;
for(int i=0;i<k;i++)
{   int temp=v[0];
  for(int i=0;i<n-1;i++)
  {
    v[i]=v[i+1];
  }
  v[n-1]=temp;
}
for(int i=0;i<n;i++)
{
    cout << v[i] << " ";
}
}