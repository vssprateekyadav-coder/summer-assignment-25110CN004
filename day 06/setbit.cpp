#include<iostream>
#include<bitset>
#include<cstring>
using namespace std;
int main()
{
double n;
int count=0;
cout << "enter the number";
cin >> n;
double num;
num=n-(int)n;

bitset<8>bits((int)n) ;
string c=bits.to_string();
for(int i=0;i<8;i++)
{
if(c[i]=='1')
{
    count++;
}
}
for(int i=0;i<6;i++)
{
    double temp = num * 2;

    if((int)temp == 1)
    {
        count++;
    }

    num = temp - (int)temp;
}
cout << count;
}