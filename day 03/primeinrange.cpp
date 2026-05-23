#include<iostream>
#include<cmath>
using namespace std;
void prime(int n,int &c)
{
 if(n==0 || n==1)
   {
    c=0;
   }
   for(int i=2;i<=pow(n,0.5);i++)
{
if(n%i==0)
{
    c=0;
    return;
}
}
c=1;
}
int main()
{
    int a,c;
    cout << "enter the value of a";
    cin >> a;
    for(int i=2;i<=a;i++)
    {
        prime(i,c);
        if(c==1)
        {
            cout << i << " ";
        }
    }
    return 0;

}