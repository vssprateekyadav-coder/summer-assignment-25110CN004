#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout <<"enter the length of array 1";
    cin >> n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
{
    cin >> v1[i];
}
 int n1;
    cout <<"enter the length of array 1";
    cin >> n1;
    vector<int> v2(n1);
    for(int i=0;i<n1;i++)
{
    cin >> v2[i];
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
vector<int> merged;
int i=0;
int j=0;
while(i<n && j<n1)
{
    if(v1[i]<v2[j])
    {
        i++;
    }
    else if(v1[i]>v2[j])
    {
        j++;
    }
    else if(merged.empty() || (v1[i]==v2[j] && v1[i]!=merged.back()))
{  
    merged.push_back(v1[i]);
    i++;
    j++;
}
else if(v1[i]==v2[j] && v1[i]==merged.back())
{
    i++;
    j++;
}
}
for(int k=0;k<merged.size();k++)
{
    cout << merged[k] << " ";
}

}