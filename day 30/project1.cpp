#include<iostream>
#include<map>
#include<string>
using namespace std;

void prop(int n, map<int,int> &property)
{
    for(int i = 1; i <= n; i++)
    {
        cout << "Enter the minimum bid for Property " << i << ": Rs. ";
        cin >> property[i];
    }
}

void enterpin(int &pin, int n,map<int,bool> &sold)
{   if(pin > n || pin <= 0)
    {
        cout << "Invalid Property Number! Please enter again: ";
        cin >> pin;
        enterpin(pin, n,sold);
        return;
    }
    if(sold[pin]==true)
    {
        cout<<"property no."<<pin<<" is already sold\n";
        cout << "Enter another Property Number: ";
        cin>>pin;
        enterpin(pin,n,sold);
        return;
    }

    else
    {
        cout << "\nBidding Starts...\n";
    }
}

void bidding(int pin, map<int,int> &bidder, map<int,int> &property,string &s,map<int,bool> &sold)
{
    int bid = property[pin];
    int cn = -1;
    int sell = -1;
    int cnt = 0;
    int bid1 = 0;
    bool handraise = false;

    cout << "\nStarting Bid: Rs. " << bid << endl;

    while(cnt < 3)
    {
        char ch = 'n';

        cout << "\nAny New Bid? (Y/N): ";
        cin >> ch;

        if(ch == 'y' || ch == 'Y')
        {
            handraise = true;
        }
        else
        {
            handraise = false;
        }

        if(!handraise)
        {
            cnt++;
            cout << "Auction Call " << cnt
                 << " | Current Highest Bid: Rs. "
                 << bid << endl;
        }
        else
        {
            cout << "Enter Bidder Card Number: ";
            cin >> cn;

            while(cn <= 0)
            {
                cout << "Invalid Card Number! Enter again: ";
                cin >> cn;
            }

            cout << "Enter Your Bid Amount: Rs. ";
            cin >> bid1;

            if(bid1 <= bid)
            {
                cout << "Invalid Bid! Bid must be greater than Rs. "
                     << bid << "." << endl;
            }
            else
            {
                bidder[cn] = bid1;
                bid = bid1;
                property[pin] = bid;
                cnt = 0;
                sell = cn;
            }
        }
    }

    if(sell == -1)
    {
        cout << "\n=====================================\n";
        cout << "         AUCTION CLOSED\n";
        cout << "=====================================\n";
        cout << "Property No. " << pin
             << " remained UNSOLD.\n";
        cout << "No valid bids were received.\n";
        cout << "=====================================\n";
    }
    else
    {
        cout << "\n=====================================\n";
        cout << "         AUCTION COMPLETED\n";
        cout << "=====================================\n";
        cout << "Property Number : " << pin << endl;
        cout << "Winning Bid     : Rs. " << bid << endl;
        cout << "Winning Bidder  : Card No. " << sell << endl;
        cout << "=====================================\n";
        sold[pin]=true;
    }
    cout << "\nEnter 'end' to stop the auction or type anything else to continue: ";
    cin >> s;
}

int main()
{
    cout << "=====================================\n";
    cout << "        PROPERTY BIDDING SYSTEM\n";
    cout << "=====================================\n";
    cout << "Rules:\n";
    cout << "1. Enter Y if you want to place a higher bid.\n";
    cout << "2. A new bid must be greater than the current highest bid.\n";
    cout << "3. The property is sold after three auction calls with no new bids.\n";
    cout<<  "4. If you want end the Auction enter (end) when asked\n\n";
    map<int,int> property;
    map<int,int> bidder;
    map<int,bool> sold;
    int n;

    cout << "Enter the Number of Properties: ";
    cin >> n;

    cout << "\nEnter the Minimum Bid for Each Property\n";
    cout << "---------------------------------------\n";
    prop(n, property);

    int pin;
    string s;
    cout<<"Enter 'start' to start the auction";
    cin>>s;
    while(s!="end")
    {cout << "\nSelect the Property for Auction\n";
    cout << "Enter Property Number: ";
    cin >> pin;
    

    enterpin(pin, n,sold);

    bidding(pin,bidder,property,s,sold);}
    cout << "\n=====================================\n";
cout << "Thank you for using the Property Bidding System!\n";
cout << "=====================================\n";


    return 0;
}