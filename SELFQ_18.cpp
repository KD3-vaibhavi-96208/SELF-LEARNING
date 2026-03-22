template<class T>
class Array{
    T *arr;
    int size;
public:
    Array(int s){
        size=s;
        arr=new T[size];
    }
    ~Array(){ delete[] arr; }
};