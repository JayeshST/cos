#include<iostream>
using namespace std;
class Account{
private: 
           int actid;
          string name,city,email;
          double balance;
public: 
        Account(){
            cout<<"Default constr"<<endl;
actid=12345;
name="Jayesh";
city="Jalgaon";
email="Jay@gmail";
balance=1000;
        }
Account(int actid,string name,string city,string email,double balance){
cout<<"parameter constr"<<endl;
this->actid=actid;
this->name=name;
this->city=city;
this->email=email;
this->balance=balance;

}
void deposite(double amount){
    balance=balance+amount;
    cout<<"After deposite balance="<<balance<<endl;
}
    void withdraw(double amount){
        balance=balance-amount;
        cout<<"After withdraw Balance="<<balance<<endl;
    }    
~Account(){
    cout<<"Destructor get called"<<endl;
}
void display(){
    cout<<actid<<" "<<name<<"  "<<city<<" "<<email<<" "<<balance<<" "<<endl;
}

void moneytransfer(double amount,Account &receiveact){
this->balance=balance-amount;
receiveact.balance=receiveact.balance+amount;
cout<<"money transfer to"<<name<<"  to "<<receiveact.name<<endl;

}

};