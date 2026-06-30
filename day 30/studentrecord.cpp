#include<iostream>
#include<string>
using namespace std;

struct Student
{
    int id;
    string name;
};

void addStudent(Student s[], int &total)
{
    int n;

    cout<<"How many students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter ID: ";
        cin>>s[total].id;

        cin.ignore();

        cout<<"Enter Name: ";
        getline(cin,s[total].name);

        total++;
    }
}

void displayStudent(Student s[], int total)
{
    if(total==0)
    {
        cout<<"No Record Found";
        return;
    }

    for(int i=0;i<total;i++)
    {
        cout<<"\nStudent "<<i+1;
        cout<<"\nID: "<<s[i].id;
        cout<<"\nName: "<<s[i].name<<endl;
    }
}

void searchStudent(Student s[], int total)
{
    int search;
    cout<<"Enter ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(s[i].id==search)
        {
            cout<<"ID: "<<s[i].id;
            cout<<"\nName: "<<s[i].name<<endl;
            return;
        }
    }

    cout<<"Student Not Found";
}

void updateStudent(Student s[], int total)
{
    int search;
    cout<<"Enter ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(s[i].id==search)
        {
            cout<<"Enter New ID: ";
            cin>>s[i].id;

            cin.ignore();

            cout<<"Enter New Name: ";
            getline(cin,s[i].name);

            cout<<"Record Updated";
            return;
        }
    }

    cout<<"Student Not Found";
}

void deleteStudent(Student s[], int &total)
{
    int search,pos=-1;

    cout<<"Enter ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(s[i].id==search)
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
    {
        cout<<"Student Not Found";
        return;
    }

    for(int i=pos;i<total-1;i++)
    {
        s[i]=s[i+1];
    }

    total--;
    cout<<"Student Deleted";
}

int main()
{
    Student s[100];
    int total=0,choice;

    while(1)
    {
        cout<<"\n1.Add Student";
        cout<<"\n2.Display Students";
        cout<<"\n3.Search Student";
        cout<<"\n4.Update Student";
        cout<<"\n5.Delete Student";
        cout<<"\n6.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        if(choice==1)
        {
            addStudent(s,total);
        }
        else if(choice==2)
        {
            displayStudent(s,total);
        }
        else if(choice==3)
        {
            searchStudent(s,total);
        }
        else if(choice==4)
        {
            updateStudent(s,total);
        }
        else if(choice==5)
        {
            deleteStudent(s,total);
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