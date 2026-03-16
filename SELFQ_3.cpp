#include<iostream>
using namespace std;

class student
{
public:
int rollno;
int marks;


void acceptrecord (void)
{
    cout<<"rollno :";
    cin>>rollno;
    cout<<"marks :";
    cin>>marks;

}

void printrecord (void)
{
    cout<<"rollno :"<<rollno<< " " <<"marks :"<<marks <<endl;
}
};
int main()
{
    int n;
    cout<<"enter number of students:";
    cin>>n;

    student*ptr = new student[n];
    for(int i =0;i<n;i++)
    {
        cout << " Enter details of students :" << i+1<<endl;
        ptr[i].acceptrecord();     
   
    }
    cout<<"Students rescords:" ;
    for(int i =0 ; i<n ;i++)
    {
        ptr[i].printrecord();
    }

    float maxmarks =ptr[0].marks;
    for(int i =0;i<n;i++)
    {
        if(ptr[i].marks > maxmarks)
        maxmarks = ptr[i].marks;
    }
    cout<<"highest marks :" <<maxmarks <<endl;
    delete[] ptr;
    return 0;
}

