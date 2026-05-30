#include<iostream>
#include<cmath>
int prime(int n)
{   int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    int lf=1;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && prime(i)==2)
        {
            lf=i;
        }
    }
    cout << "largest prime factor ="<< lf;
    return 0;
}