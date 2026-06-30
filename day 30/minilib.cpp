#include<iostream>
#include<string>
using namespace std;

struct Book
{
    int id;
    string name;
    string author;
};

void addBook(Book b[], int &total)
{
    int n;

    cout<<"How many books: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Book ID: ";
        cin>>b[total].id;

        cin.ignore();

        cout<<"Enter Book Name: ";
        getline(cin,b[total].name);

        cout<<"Enter Author Name: ";
        getline(cin,b[total].author);

        total++;
    }
}

void displayBook(Book b[], int total)
{
    if(total==0)
    {
        cout<<"No Books Available";
        return;
    }

    for(int i=0;i<total;i++)
    {
        cout<<"\nBook "<<i+1;
        cout<<"\nBook ID: "<<b[i].id;
        cout<<"\nBook Name: "<<b[i].name;
        cout<<"\nAuthor: "<<b[i].author<<endl;
    }
}

void searchBook(Book b[], int total)
{
    int search;

    cout<<"Enter Book ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(b[i].id==search)
        {
            cout<<"Book ID: "<<b[i].id;
            cout<<"\nBook Name: "<<b[i].name;
            cout<<"\nAuthor: "<<b[i].author<<endl;
            return;
        }
    }

    cout<<"Book Not Found";
}

void updateBook(Book b[], int total)
{
    int search;

    cout<<"Enter Book ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(b[i].id==search)
        {
            cout<<"Enter New Book ID: ";
            cin>>b[i].id;

            cin.ignore();

            cout<<"Enter New Book Name: ";
            getline(cin,b[i].name);

            cout<<"Enter New Author Name: ";
            getline(cin,b[i].author);

            cout<<"Book Updated";
            return;
        }
    }

    cout<<"Book Not Found";
}

void deleteBook(Book b[], int &total)
{
    int search,pos=-1;

    cout<<"Enter Book ID: ";
    cin>>search;

    for(int i=0;i<total;i++)
    {
        if(b[i].id==search)
        {
            pos=i;
            break;
        }
    }

    if(pos==-1)
    {
        cout<<"Book Not Found";
        return;
    }

    for(int i=pos;i<total-1;i++)
    {
        b[i]=b[i+1];
    }

    total--;

    cout<<"Book Deleted";
}

int main()
{
    Book b[100];
    int total=0,choice;

    while(1)
    {
        cout<<"\n1.Add Book";
        cout<<"\n2.Display Books";
        cout<<"\n3.Search Book";
        cout<<"\n4.Update Book";
        cout<<"\n5.Delete Book";
        cout<<"\n6.Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        if(choice==1)
        {
            addBook(b,total);
        }
        else if(choice==2)
        {
            displayBook(b,total);
        }
        else if(choice==3)
        {
            searchBook(b,total);
        }
        else if(choice==4)
        {
            updateBook(b,total);
        }
        else if(choice==5)
        {
            deleteBook(b,total);
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