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
    for(int i=0;i<n-1;i++)
    {
        if((v[i+1]-v[i])!=1 && c==0)
        {
            cout << v[i]+1 << "is missing\n";
            c++;
        }
        
        if((v[i+1]-v[i])!=1 && c!=0)
        {
            cout << v[i]+1 << "is missing\n";
            
        }
        
    }
    if(c==0)
    {cout << "no number is missing";
    }
    return 0;

}