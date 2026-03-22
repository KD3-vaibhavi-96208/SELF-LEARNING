#include<iostream>
using namespace std;

class Payment{
public:
    virtual void makePayment(double amt)=0;
};

class CreditCard: public Payment{
public:
    void makePayment(double amt){
        cout<<"Paid "<<amt<<" via Credit Card\n";
    }
};

class UPI: public Payment{
public:
    void makePayment(double amt){
        cout<<"Paid "<<amt<<" via UPI\n";
    }
};

class Cash: public Payment{
public:
    void makePayment(double amt){
        cout<<"Paid "<<amt<<" via Cash\n";
    }
};

class PaymentFactory{
public:
    static Payment* create(string mode){
        if(mode=="card") return new CreditCard();
        if(mode=="upi") return new UPI();
        if(mode=="cash") return new Cash();
        return NULL;
    }
};

int main(){
    Payment *p = PaymentFactory::create("upi");
    p->makePayment(1000);
}