#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string";
    getline(cin,s);
    for(auto &it:s)
    {
        if(it>=97 && it<=122)
        {
            it=it-32;
        }
    }
    cout << s;
   
}