#include<iostream>
#include<string>
#include<vector>
using namespace std;
void name(vector<string> &v)
{
    string s;
    cout<<"enter name";
    getline(cin,s);
    if(s=="end")
    {
        return;
    }
    else
    {
        v.push_back(s);
        name(v);
    }
}

int main()
{
   vector<string> v;
   cout<<"enter names and type end when done";
   name(v);
    int n = v.size();

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(v[j] > v[j + 1])   
            {
                string temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
     cout << "Sorted names:\n";
    for(string s : v)
    {
        cout << s << endl;
    }
   
}