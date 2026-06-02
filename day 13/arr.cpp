#include<iostream>
#include<vector>
using namespace std;
int main()
{int n;
    int sum=0;int avg=0;
    cout << "enter the number of element";
 cin >> n;  
 vector<int> v(n);

 cin >> n;  
 for(int i=0;i<n;i++)
 {
    cin >> v[i];
 } 
 for(int i=0;i<n;i++)
 {
    sum+= v[i];
 } 
 avg=sum/n;
 cout << "sum and average are equal to " << sum << "&" << avg;
 
}