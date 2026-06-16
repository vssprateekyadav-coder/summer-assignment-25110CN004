#include<iostream>
#include<string>
#include<vector>
using namespace std;
void word(vector<string> &v)
{
    string s;
    cout<<"enter word";
    getline(cin,s);
    if(s=="end")
    {
        return;
    }
    else
    {
        v.push_back(s);
        word(v);
    }
}

int main()
{
   vector<string> v;
   cout<<"enter words and type end when done";
   word(v);
    int n = v.size();
      for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(v[j].length() > v[j + 1].length())  
            {
                string temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

  
   
    for(string s : v)
    {
        cout << s << endl;
    }
   
}