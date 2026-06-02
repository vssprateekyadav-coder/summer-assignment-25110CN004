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
{   int temp=v[n-1];
  for(int j=n-1;j>0;j--)
  {
    v[j]=v[j-1];
  }
  v[0]=temp;
}
for(int i=0;i<n;i++)
{
    cout << v[i] << " ";
}
}