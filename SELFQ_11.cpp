#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class List{
    Node *head;
public:
    List(){ head=NULL; }

    void add_first(int val){
        Node *n=new Node{val,head};
        head=n;
    }

    void add_last(int val){
        Node *n=new Node{val,NULL};
        if(!head){ head=n; return; }
        Node *t=head;
        while(t->next) t=t->next;
        t->next=n;
    }
};