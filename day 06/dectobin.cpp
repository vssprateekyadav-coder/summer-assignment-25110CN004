#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    deque <int> bin;
    while(n>0)
    {
        bin.push_front(n%2);
        n=n/2;
    }
    for(int i=0;i<bin.size();i++)
    {
        cout << bin[i] << " ";
    }
    return 0;
}