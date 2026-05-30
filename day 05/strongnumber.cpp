int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
}
#include<iostream>
using namespace std;
int main()
{
int n;
cout << "enter the value of n";
cin >> n;
int n1=n;
int sum=0;
while(n>0)
{
sum=sum+fact(n%10);
n=n/10;
}
if(sum==n1)
{
    cout << " given number is strong number";
}
else{
    cout << "given number is not strong number";
}

}