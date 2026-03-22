#include<fstream>
using namespace std;

int main(){
    ofstream out("data.txt");
    out<<"Hello";
    out.close();

    ifstream in("data.txt");
    string s;
    in>>s;
    cout<<s;
}