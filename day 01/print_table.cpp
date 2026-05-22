#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<< "give number";
    cin>> n;
    cout<< "times of multiplication table";
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        cout << n*i;
        cout << "\n";
    }
    return 0;
}