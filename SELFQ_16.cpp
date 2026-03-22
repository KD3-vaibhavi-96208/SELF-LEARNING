#include<memory>

try{
    unique_ptr<Student> s(new Student);
    s->display();
}
catch(...){
    cout<<"Error";
}