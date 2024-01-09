#include<iostream>

class base{
    int a;
    int b;
    int *p;
    public:
    base(){
        p = new int;
    }
    void set(int a, int b, int z){
        this->a = a;
        this->b = b;
        *p = z;
    }
    base(const base &obj){
        a = obj.a;
        b = obj.b;
        p = new int;
        *p = *(obj.p);
    }
    void get(){
        std::cout << a << " " << b << " " << p << std::endl;
    }
};

int main(){
    base b1;
    b1.set(1,2,3);
    base b2 = b1;
    b2.get();
}