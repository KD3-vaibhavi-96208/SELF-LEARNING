#include<iostream>
using namespace std;

class BankAccount{
    int accNo;
    string name;
    double balance;

public:
    void init(int a,string n,double b){
        accNo=a; name=n; balance=b;
    }

    void deposit(double amt){
        balance+=amt;
    }

    void withdraw(double amt){
        if(amt<=balance)
            balance-=amt;
        else
            cout<<"Insufficient balance\n";
    }

    void display(){
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount b;
    b.init(1,"ABC",1000);
    b.deposit(500);
    b.withdraw(200);
    b.display();
}