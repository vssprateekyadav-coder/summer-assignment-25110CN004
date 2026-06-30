#include<iostream>
#include<string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

void addEmployee(Employee e[], int &total)
{
    int n;

    cout<<"How many employees: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Employee ID: ";
        cin>>e[total].id;

        cin.ignore();

        cout<<"Enter Employee Name: ";
        getline(cin,e[total].name);

        cout<<"Enter Department: ";
        getline(cin,e[total].department);

        cout<<"Enter Salary: ";
        cin>>e[total].salary;

        total++;
    }
}

void displayEmployee(Employee e[], int total)
{
    if(total==0)
    {
        cout<<"No Employee Record Found";
        return;
    }

    for(int i=0;i<total;i++)
    {
        cout<<"\nEmployee "<<i+1;
        cout<<"\nID: "<<e[i].id;
        cout<<"\nName: "<<e[i].name;
        cout<<"\nDepartment: "<<e[i].department;
        cout<<"\nSalary: "<<e[i].salary<<endl;
    }
}

void searchEmployee(Employee e[], int total)
{
    int search;

    cout<<"Enter Employee ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(e[i].id==search)
        {
            cout<<"ID: "<<e[i].id;
            cout<<"\nName: "<<e[i].name;
            cout<<"\nDepartment: "<<e[i].department;
            cout<<"\nSalary: "<<e[i].salary<<endl;
            return;
        }
    }

    cout<<"Employee Not Found";
}

void updateEmployee(Employee e[], int total)
{
    int search;

    cout<<"Enter Employee ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(e[i].id==search)
        {
            cout<<"Enter New ID: ";
            cin>>e[i].id;

            cin.ignore();

            cout<<"Enter New Name: ";
            getline(cin,e[i].name);

            cout<<"Enter New Department: ";
            getline(cin,e[i].department);

            cout<<"Enter New Salary: ";
            cin>>e[i].salary;

            cout<<"Employee Updated";
            return;
        }
    }

    cout<<"Employee Not Found";
}

void deleteEmployee(Employee e[], int &total)
{
    int search,pos=-1;

    cout<<"Enter Employee ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(e[i].id==search)
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
    {
        cout<<"Employee Not Found";
        return;
    }

    for(int i=pos;i<total-1;i++)
    {
        e[i]=e[i+1];
    }

    total--;

    cout<<"Employee Deleted";
}

int main()
{
    Employee e[100];
    int total=0,choice;

    while(1)
    {
        cout<<"\n1.Add Employee";
        cout<<"\n2.Display Employees";
        cout<<"\n3.Search Employee";
        cout<<"\n4.Update Employee";
        cout<<"\n5.Delete Employee";
        cout<<"\n6.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        if(choice==1)
        {
            addEmployee(e,total);
        }
        else if(choice==2)
        {
            displayEmployee(e,total);
        }
        else if(choice==3)
        {
            searchEmployee(e,total);
        }
        else if(choice==4)
        {
            updateEmployee(e,total);
        }
        else if(choice==5)
        {
            deleteEmployee(e,total);
        }
        else if(choice==6)
        {
            break;
        }
        else
        {
            cout<<"Invalid Choice";
        }
    }

    return 0;
}