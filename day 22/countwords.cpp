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
        cout << "no. of words = 0";
        return 0; 
    }
    int c=0;
    char a=s[0];
   for(auto it:s)
   {    it=tolower(it);
   if((it<'a' || it>'z') && (a>='a' && a<='z'))
    {
        c++;
    }
    a=it;
   }
   a=*(s.end()-1);
   a=tolower(a);
   if(a>='a' && a<='z')
   {
    c++;
   }
   cout << "no. of words = "<< c;

}