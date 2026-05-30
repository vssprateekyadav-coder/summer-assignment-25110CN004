#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
   string bin;
   cin >> bin;
   vector<int> v;
   int j=-1;
   int b=0;
   int n=bin.length();
   for(int i=0;i<n;i++)
   {
    if(bin[i]=='.')
    {
        j=i;
        break;
    }
    else{
        v.push_back(bin[i]-'0');
    }
   }
   double sum=0;
   for(int i=v.size()-1;i>=0;i--)
   {
    sum=sum+(v[i]<<b);
    b++;
   }
   v.clear();
   n=bin.length();
   for(int i=j+1;i<n;i++)
   {
    v.push_back(bin[i]-'0');

   }
   b=-1;
   for(int i=0;i<v.size();i++)
   {
    sum=sum+(v[i]*pow(2,b));
    b--;
   }
   cout << sum;
   return 0;



}