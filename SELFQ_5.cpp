#include<iostream>
using namespace std;

int mystrlen(char *s){
    int i=0;
    while(s[i]!='\0') i++;
    return i;
}

void mystrcpy(char *d,char *s){
    int i=0;
    while(s[i]!='\0'){
        d[i]=s[i];
        i++;
    }
    d[i]='\0';
}

int main(){
    char s1[20]="Hello";
    char s2[20];

    mystrcpy(s2,s1);
    cout<<s2<<endl;
    cout<<mystrlen(s2)<<endl;
}