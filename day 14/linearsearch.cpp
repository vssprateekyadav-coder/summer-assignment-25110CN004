#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,2,5,3,7,8,9,5,6,15,42};
    int k;
    int a=0;
    cout << "enter the element to be searched";
    cin >> k;
    for(int i=0;i<sizeof(arr);i++)
    {
        if(k==arr[i])
        {   a++;
            cout << "found at position " << i+1 << "\n";
        }
    }
    if(a==0)
    {
        cout << "element not found";
    }
}