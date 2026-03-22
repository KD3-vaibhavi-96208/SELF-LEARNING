#include<iostream>
using namespace std;

class Matrix{
    int a[2][2];
public:
    void input(){
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>>a[i][j];
    }

    Matrix operator+(Matrix m){
        Matrix r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                r.a[i][j]=a[i][j]+m.a[i][j];
        return r;
    }

    Matrix operator-(Matrix m){
        Matrix r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                r.a[i][j]=a[i][j]-m.a[i][j];
        return r;
    }

    Matrix operator*(Matrix m){
        Matrix r;
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++){
                r.a[i][j]=0;
                for(int k=0;k<2;k++)
                    r.a[i][j]+=a[i][k]*m.a[k][j];
            }
        return r;
    }

    void display(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
};