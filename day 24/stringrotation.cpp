#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout << "enter the string";
    getline(cin,s);
    if(s.empty())
    {
        cout << "empty string";
        return 0; 
    }
     string s1;
    cout << "enter the string1";
    getline(cin,s1);
    if(s==s1)
    {
          cout << "second string is rotaion of first string";
          return 0;
    }
    if(s.length()!=s1.length())
    {
         cout << "second string is not a rotation of first string";
         return 0;
    }
    s+=s;
    int n=s.length();
    int l=s1.length();
    for(int i=0;i<=n-l;i++)
    {   int z=0;
        if(s[i]==s1[0])
        {
            for(int j=0;j<l;j++)
            {
                if(s1[j]==s[i+j])
                {
                    z++;
                }
                else
                {
                    break;
                }
            }

        }
        if(z==l)
        {
            cout << "second string is rotaion of first string";
            return 0;
        }
    }
    cout << "second string is not a rotation of first string";

    

}