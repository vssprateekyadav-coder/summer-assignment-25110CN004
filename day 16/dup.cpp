#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int c=0;
    cout <<"enter the length of n";
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
{
    cin >> v[i];
}
    sort(v.begin(),v.end());
   
   int i=0;
   for(int j=1;j<v.size();j++)
   {
    if(v[i]!=v[j])
    {   i++;
        v[i]=v[j];
    }
   }
   cout << "unique";
   for(int j=0;j<=i;j++)
   {
    cout << v[j] << " ";
   }

}