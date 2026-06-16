#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string";
    getline(cin,s);
    int v=0;
    int c=0;
    for(auto it:s)
    {
        if( it=='A' ||it=='a' ||it=='E' ||it=='e' ||it=='I' ||it=='i' ||it=='o' ||it=='O' ||it=='U' ||it=='u')
        {
            v++;
        }
        else if((it>='A' && it<='Z')|| (it>='a' && it <='z'))
        {
            c++;
        }
    }
    cout << "vowels = "<< v;
    cout<< "\nconsonents = "<<c;
}