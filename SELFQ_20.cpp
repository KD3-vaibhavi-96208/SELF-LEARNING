#include<memory>
using namespace std;

int main(){
    unique_ptr<int> u(new int(10));

    shared_ptr<int> s1 = make_shared<int>(20);
    shared_ptr<int> s2 = s1;

    weak_ptr<int> w = s1;
}