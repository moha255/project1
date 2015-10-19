//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************

#include<iostream>
using namespace std;

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************
class  BankAccount{
        string AccountID;
        int Balance;
public:
        BankAccount();  //  sets the balance to 0.
        BankAccount(int value);  // sets the balance to a given value
        void Set_AccountID(string x);
        int Get_AccountID();
        void Set_Balance(int x);
        int Get_Balance();
        void show_BankAccount();	//function to show data on screen
        void dep(int);	//function to accept amount and add to balance amount
        void draw(int);	//function to accept amount and subtract from balance amoun

};         //class ends here

 BankAccount::BankAccount(){
    Balance = 0;
}
 BankAccount::BankAccount(int value){
    Balance = value;
}

void BankAccount::Set_AccountID(int x){
    AccountID = x;
}
int BankAccount::Get_AccountID(){
    return AccountID;
}
void BankAccount::Set_Balance(int x){
    Balance = x;
}
int BankAccount::Get_Balance(){
    return Balance;
}
void BankAccount::show_BankAccount(){
    cout<<"\n BankAccount No. : "<<AccountID;
    cout<<"\n BankAccount Balance : "<<Balance;
}
void BankAccount::dep(int x)
{
      Balance = Balance + x;
}

void BankAccount::draw(int x)
{
    if (Balance > x)
    Balance = Balance - x;
}

void main(){
    BankAccount Moha;
    Moha.Set_AccountID("01023143293");
    Moha.Set_Balance("500");
    Moha.show_BankAccount();
}
