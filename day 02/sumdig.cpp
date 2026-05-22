#include<iostream>
using namespace std;
int main()
{
    int n,c,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
        c=i%10;
        sum+=c;
    }
    cout<<"Sum is:"<<sum;
    return 0;
}