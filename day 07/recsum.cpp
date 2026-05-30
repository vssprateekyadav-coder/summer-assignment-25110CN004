#include<iostream>
using namespace std;
int sum(int n,int add)
{   
    if(n==0)
    {
        return add;
    }
    else
    {   add=add+n%10;
        return sum((n/10),add);
    }

}
int main()
{
int n;
cout << "enter the value of n";
cin >> n;
cout << sum(n,0);

}