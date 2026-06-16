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
    int n=s.length();
    int a=s[0];
    int pos=0;
    int count=0;
for(int i=0;i<n;i++)
{
    if(a==s[i])
    {
        count++;
    }
    else{
        if(count==1)
        {s[pos]=a;
            a=s[i];
            pos++;
            count=1;
        }
        else
        {
            s[pos]=a;
            pos++;
            s[pos]=count+'0';
            pos++;
            count=1;
        }
    }   
}   if(count==1)
    {s[pos]=a;
    pos++;}
    else
    {s[pos]=a;
    pos++;
        s[pos]=count+'0';
    pos++;}
    s.resize(pos);
    cout << "compressed string:\n";
    cout << s;

}