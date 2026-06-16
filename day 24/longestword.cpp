#include<iostream>
#include<string>
#include<vector>
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
    int n=s.length();
   int l=0;
   int r=0;
   int max=0;
   int c=0;
   int j;
   for(int i=0;i<n;i++)
   {
    if(s[i]==' '||s[i]=='\t'||s[i]=='.')
    {
        if(max<c)
        {
            max=c;
            j=i-1;
        }
        c=0;
    }
    else{
        c++;
    }
   }
   if(c>max)
   {
    max=c;
    j=n-1;
   }
   cout << "longest word = ";
   for(int i=j-max+1;i<=j;i++)
   {
    cout << s[i];
   }
}