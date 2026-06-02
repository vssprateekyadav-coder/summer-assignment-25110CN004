#include<iostream>
using namespace std;
int main()
{
    for(int i=4;i>=0;i--)
    {   int n=1;
        for(int j=0;j<=i;j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}