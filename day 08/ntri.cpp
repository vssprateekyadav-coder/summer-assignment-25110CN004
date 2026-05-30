#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the height of triangle";
    cin >> n;
    for(int i=1;i<=n;i++)
    {   
        for(int j=0;j<i;j++)
        {
            cout << i << " ";       
        }
        cout << "\n";
    }
}