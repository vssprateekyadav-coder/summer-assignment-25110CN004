#include<iostream>
#include<vector>
#include <unordered_map>
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
 int max1=v[0];
 int max2=v[0];
 for(int i=1;i<n;i++)
 {
    if(max1<v[i])
    {
        max2=max1;
        max1=v[i];
    }
    else if (max1>v[i] && max2<v[i])
    {
        max2=v[i];
    }
 }
 if(max1==max2)
 {
    cout << "either all element are same or only one element is present";
    return 0;
}
else{
    cout << "second maximum is " << max2;
    return 0;
}
}