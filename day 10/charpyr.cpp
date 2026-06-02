#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    for(int i=0;i<n;i++)
    {   char a='A';
        for(int j=0;j<2*n;j++)
        {
            if(j>=n-i && j<=n+i)
            {
                if(j<n)
                {
                    cout << a;
                    a++;
                }
               else
               {
                cout << a;
                a--;
               }
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}