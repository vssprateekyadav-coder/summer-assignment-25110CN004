#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> ans;
void sum(vector<int> &v, int k,vector<int> temp,int i,int dig)
{   
    if( dig==2)
    {   if(k==0)
        {ans.push_back(temp);}
       
            return;
    }
    if(i >= v.size())
{
    return;
}
    temp.push_back(v[i]);
    dig++;
    sum(v,k-v[i],temp,i+1,dig);
    temp.pop_back();
    dig--;
    sum(v,k,temp,i+1,dig);

}
int main()
{
    int n;
    cout <<"enter the length of n";
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
{
    cin >> v[i];
}
 int k;
 cout << "enter the target";
 cin >> k;
 vector<int> temp;
 sum(v,k,temp,0,0);
 if(ans.size()==0)
 {
    cout << "no such pair exist";
    return 0;
 }
 int c=1;
 for(auto it:ans)
 {
    cout << "pair["<< c << "] is {" ;
    for(auto x:it)
    {
        cout << x << " "; 
    }
    cout << "}" << endl;
    c++;
 }

}