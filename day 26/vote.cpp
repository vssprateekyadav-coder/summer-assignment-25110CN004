#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
struct vote
{
    string name;
    string nationality;
    int age;
    string eligibility;
};
int main()
{
    
    int n;
    cout << "NOTE: Eligibility will be decided on basis of nationality and age"<<"\n"<<"\n";
    cout << "enter the number of voter apllications:";
    cin >> n;
    cin.ignore();
    vector<vote> v(n);
    cout << "enter all dedtails in uppercase ";
   
    for(int i=0;i<n;i++)
    {
        cout << "enter the name of " << i+1 << " apllicant:";
        getline(cin,v[i].name);
        cout << "enter the nationality of " << i+1 << " applicant:";
        cin >> v[i].nationality;
        cout << "enter the age of " << i+1 << " applicant:";
        cin >> v[i].age;
        cin.ignore();
        v[i].eligibility="to be decided";
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].nationality!="INDIAN")
        {
            v[i].eligibility="NOT ELIGIBLE";
        }
        else if(v[i].age<18)
        {
             v[i].eligibility="NOT ELIGIBLE";
        }
        else
        {
            v[i].eligibility="ELIGIBLE";
        }
    }
    cout << "list of voters eligibilty:\n" ;
    cout<<left
    <<setw(20)<<"NAME"
    <<setw(15)<<"NATIONALITY"
    <<setw(5)<<"AGE"
    <<setw(20)<<"ELIGIBILITY"<<"\n";
    cout << string(60,'_') << "\n";

    for(int i = 0; i < n; i++)
{
    cout << left
         << setw(20) << v[i].name
         << setw(15) << v[i].nationality
         << setw(5) << v[i].age
         << setw(20) << v[i].eligibility
         << '\n';
}
return 0;

}