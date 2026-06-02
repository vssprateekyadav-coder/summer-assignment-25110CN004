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
 int l=v[0];
 int s=v[0];
 for(int i=0;i<n;i++)
 {
    if(l<v[i])
    {
        l=v[i];
    }
    if(s>v[i])
    {
        s=v[i];
    }
 }
 if(l==s)
 {
    cout << "either all element are same or only one element is present";
    return 0;
}
 
cout << "smallest and largest number are " << s << " and " << l;
 return 0;
 
}