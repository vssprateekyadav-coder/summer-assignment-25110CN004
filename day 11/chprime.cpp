#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cout << "enter the number n";
   cin >>  n;
   if(n==0 || n==1)
   {
    cout<< "no is not prime";
    return 0;
   }
   for(int i=2;i<=pow(n,0.5);i++)
{
if(n%i==0)
{
    cout << "no.is not prime";
    return 0;
}
}
cout << "no. is prime";
return 0;
}