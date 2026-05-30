#include<iostream>
using namespace std;
int main()
{ 
    char c;
    for(int i=1;i<=5;i++)
    {   c='A';
        for(int j=0;j<i;j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}