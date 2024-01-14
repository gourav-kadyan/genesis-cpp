#include<iostream>

class A{
    public:
    A(){
        std::cout << "class A constructor called" << std::endl;
    }
    ~A(){
        std::cout << "Class A destructor called" << std::endl;
    }
};

class AA{
    public:
    AA(){
        std::cout << "class AA constructor called" << std::endl;
    }
    ~AA(){
        std::cout << "Class AA destructor called" << std::endl;
    }
};

class B : public A, virtual public AA{
    public:
    B(){
        std::cout << "class B constructor called" << std::endl;
    }
    ~B(){
        std::cout << "Class B destructor called" << std::endl;
    }
};

int main(){
    B obj;
    return 69;
}