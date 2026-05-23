#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter the vlaue of n";
    cin >> n;
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
        cout << "given number if armstrong number";
    }
    else{
        cout << "given number is not armstrong";
    }
    return 0;

}