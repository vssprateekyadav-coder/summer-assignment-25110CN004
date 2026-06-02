int fact(int n)
{   int f=1;
    if(n==0 || n==1)
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
    cout << "enter the number";
    cin >> n;
    int factorial;
factorial=fact(n);
cout<< factorial;
return 0;
}