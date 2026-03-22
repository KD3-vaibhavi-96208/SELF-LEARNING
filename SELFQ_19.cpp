#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<int> l;

    for(int i=0;i<10;i++)
        l.push_back(rand()%100);

    for(auto it=l.rbegin();it!=l.rend();it++)
        cout<<*it<<" ";

    for(auto &x:l) x+=5;

    l.sort();

    for(auto x:l) cout<<x<<" ";
}