#include<iostream>
#include<random>
using namespace std;
int main()
{
    int guess;
     random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);

    int secret = dist(gen);
    cout << "guess a number between 1-100";
    cin >> guess;
    if(guess<1 || guess>100)
    {
        cout << "can you read!its 1-100";
        return 0;
    }
    int chances=1;
    if(guess==secret)
    {
        cout << "seems like luck is on your side,you won";
        return 0;
    }
    int diff;
    if(guess>secret)
    {
        diff=guess-secret;
    }
    else
    {
        diff=secret-guess;
    }
    while(guess!=secret)
    {
        cout << "oops!you got it wrong,please try again";
        cin >> guess;
        chances++;
         if(guess<1 || guess>100)
    {
        cout << "can you read!its 1-100";
        continue;
    }
         if(guess>secret)
    {
        diff=guess-secret;
    }
    else
    {
        diff=secret-guess;
    }
        if(guess==secret)
        {
            cout << "Hurray!you won in "<< chances <<"chances";
            return 0;
        }
        if(chances>=20)
        {
            cout<< "you lose!no chances left";
            return 0;
        }
        else if(diff<=5)
        {
           if(guess>secret)
           {
            cout <<"too close but think a bit small";
           }
           else
           {
            cout <<"too close ,think a bit larger";
           }
        }
        else if(diff<=10)
        {   if(guess<secret)
            {cout << "close but still smaller";}
            else
            {
                cout << "close but larger";
            }
        
        }
        else if(diff>10 && diff<50)
        {   if(guess<secret)
            {cout << "ha!very small ,far from secret";}
            else
            {
                cout << "ha!very large,far from secret";
            }
       
        }
        else if(diff>=50 && diff<=100)
        {
            cout << "too far,try again";
        }
    }

}