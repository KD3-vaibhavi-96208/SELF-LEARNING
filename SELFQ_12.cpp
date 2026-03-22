#include<iostream>
using namespace std;

class Product{
public:
    virtual void accept()=0;
    virtual void display()=0;
};

class Book: public Product{
    int pages;
public:
    void accept(){ cin>>pages; }
    void display(){ cout<<"Pages: "<<pages<<endl; }
};

class Tape: public Product{
    int playtime;
public:
    void accept(){ cin>>playtime; }
    void display(){ cout<<"Playtime: "<<playtime<<endl; }
};

int main(){
    Product *arr[5];
    int ch;

    for(int i=0;i<5;i++){
        cin>>ch;
        if(ch==1) arr[i]=new Book();
        else arr[i]=new Tape();
        arr[i]->accept();
    }

    for(int i=0;i<5;i++)
        arr[i]->display();
}