#include<iostream>
#include<vector>
#include<unordered_map>
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
   unordered_map<int,int> freq;
   for(int i=0;i<n;i++)
   {
    freq[v[i]]++;
   }
   int maxf=1;
   int key=0;
   for(auto it :freq)
   {
    if(it.second > maxf)
    {
        maxf=it.second;
        key=it.first;
    }
   }
   if(maxf==1)
   {
    cout << "all element occur once only";
    return 0;
   }
   else{
    cout << "maximum frequnecy is "<< maxf << "of element = " << key;
   }


}