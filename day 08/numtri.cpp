#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=1;
    cout << "enter the height of triangle";
    cin >> n;
    for(int i=1;i<=n;i++)
    {   a=1;
        for(int j=0;j<i;j++)
        {
            cout << a << " ";
            a++;
        }
        cout << "\n";
    }
}