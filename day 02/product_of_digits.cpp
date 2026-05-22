#include<iostream>
using namespace std;
int main()
{
    int n,c,p=1;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
        c=i%10;
        p*=c;
    }
    cout<<"Product is:"<<p;
    return 0;
}