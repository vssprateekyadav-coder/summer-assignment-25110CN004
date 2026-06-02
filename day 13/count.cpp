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
 int a=0,b=0;
 for(int i=0;i<n;i++)
 {
    if(v[i]%2==0)
    {
        a++;
    }
    else{
        b++;
    }
 }
 cout << "no. of even element =" << a;
 cout << endl;
 cout << "no. of odd element =" << b;
}