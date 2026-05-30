#include<iostream>
using namespace std;
int main()
{
    int x;
    int n;
    double pow=1;
    cout << "enter the number";
    cin >> x;
    cout << "enter the power";
    cin >> n;
    if(n==0)
    {
        cout << "1";
        return 0;
    }
    if(x==0 && n<0)
    {
        cout << "undefined";
        return 0;
    }
    if(x==0 || x==1)
    {
        cout << x;
        return 0;
    }
    
    if(n<0)
    {
        for(int i=n;i<0;i++)
        {
            pow=pow/x;
        }
    }
    else{
    for(int i=0;i<n;i++)
    {
        pow=pow*x;
    }}
    cout << pow;
    return 0;
}