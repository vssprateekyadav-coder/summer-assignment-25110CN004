#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int n)
{
    
    int n1=n;
    int dig=0;
    if(n==0)
    {
        dig=1;
    }
    else
    {while(n1>0)
    {
        dig++;
        n1=n1/10;
    }}
    n1=n;
    int sum=0;
    while(n1>0)
    {
        sum=sum+round(pow((n1%10),dig));
        n1=n1/10;
    }
    if(sum==n)
   {
    cout << n << " ";
   }
}
int main()
{
    int n;
    cout << "enter the range";
    cin >> n;
    for(int i=0;i<=n;i++)
    {
    armstrong(i);
    }
    return 0;
}