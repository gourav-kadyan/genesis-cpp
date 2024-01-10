#include<iostream>

class base{
    int a;
    int b;
    public:
    base(){
        a = 0;
        b = 0;
    }
    base(int a, int b){
        this->a = a;
        this->b = b;
    }
    base operator+(const base &obj){
        base noice;
        noice.a = a + obj.a;
        noice.b = b + obj.b;
        return noice;
    }
    void operator-(){
        --a;
        --b;
    }
    void Display(){
        std::cout << a << " " << b << std::endl;
    }
};



int main(){
    base b1(10,10);
    base b2(10,10);
    base b3 = b1+b2;
    b3.Display();
    -b3;
    b3.Display();
    return 0;
}
