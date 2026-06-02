#include<iostream>
using namespace std;
int main()
{
    int n,dig,rev=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=n;i>0;i/=10)
    {
        dig=i%10;
        rev=rev*10+dig;
    }
    if(rev==n)
    cout<<"Palindrome";
    else
    cout<<"Not a Palindrome";
    return 0;
}