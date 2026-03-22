#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    virtual void work()=0;

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

class Student: public Person{
public:
    int marks;
    void work(){ cout<<"Studying\n"; }
};

class Teacher: public Person{
public:
    int salary;
    void work(){ cout<<"Teaching\n"; }
};

int main(){
    Person *p;

    Student s;
    p=&s;
    p->work();

    Teacher t;
    p=&t;
    p->work();
}