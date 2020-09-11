#include <iostream>
#include <conio.h>

using namespace std;

float Balance = 100000,Deposit, Withdraw, Exit;
int choice;
int pin=1234;
int i;
char transaction = 'y';

int main()
{
    cout <<"************Welcome to your Bank************"<<endl;
    cout <<"Enter your pin number: ";
    cin >>pin;
    do
    {
    if (pin==1234)
    {
        cout <<"1. Balance Inquiry\n"<<endl;
        cout <<"2. Cash Withdraw\n"<<endl;
        cout <<"3. Deposit Cash\n"<<endl;
        cout <<"4. Exit\n"<<endl;
        cout <<"Enter your choice:"<<endl;
        cin>>choice;
    }
    else
    {
        cout <<"You have entered a wrong pin\n"<<endl;
    }
switch (choice)
{
    case 1: cout <<"Your account balance is:\n"<<Balance<<endl;
    break;
    case 2: cout <<"Enter amount to withdraw:\n";
    cin>>Withdraw;
    if (Withdraw<=100000)
    {
        cout <<"Please collect your cash\n"<<endl;
        cout <<"Your available balance is\n" <<Balance-Withdraw<<endl;
    }
    else
    {
        cout <<"Insufficient Fund\n"<<endl;
    }
    break;
    case 3: cout <<"Enter amount to deposit:\n";
    cin>>Deposit;
    cout <<"Your new balance is\n" <<Balance+Deposit<<endl;
    break;
    case 4: cout <<"THANK YOU FOR USING OUR ATM\n"<<endl;
    break;
    default:
        cout <<"You have entered a wrong choice\n"<<endl;
}

    cout <<"Do you want to perform another transaction?(Y/N)\n"<<endl;
    cin>>transaction;

    if (transaction == 'n' || transaction == 'N')
        i=1;
    }
    while (!i);
    cout <<"THANK YOU FOR USING OUR ATM\n"<<endl;

    getch();
    return 0;
}
