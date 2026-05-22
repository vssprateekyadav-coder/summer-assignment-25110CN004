int digit(int n,int c)
{   
    if(n==0)
    {
        return c;
    }
    else
    {
        c++;
        return digit(n/10,c);
    }
}
#include<iostream>
using namespace std;
int main()
{
int n;
int c=0;
cout << "enter the number";
cin >> n;
int dig=0;
dig=digit(n,c);
cout<< "number of digits ="<< dig;
return 0;
}