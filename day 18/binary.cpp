#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of array";
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int k;
    cout << "enter the element to be searched";
    cin >> k;
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==k)
        {
            cout << "element is found at"<< mid+1 << "th position";
            return 0;
        }
        else if(v[mid]<k)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<< "element is not found";
    return 0;
}