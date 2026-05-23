#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<< "enter the value of a";
cin >> a;
cout << "enter the value of b";
cin >> b;
int i=1;
while(i<(a*b))
{
    if(i%a==0 && i%b==0)
    {
        cout << a*b;
        return 0;
    }
    i++;
}
cout << a*b;
return 0;
}