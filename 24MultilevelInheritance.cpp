#include<iostream>
#include<string>

class A{
    public:
    A(){
        std::cout << "Class A contructor called" << std::endl;
    }
    ~A(){
        std::cout << "Class A destructor called" << std::endl;
    }
};

class B : public A{
    public:
    B(){
        std::cout << "Class B constructor called" << std::endl;
    }
    ~B(){
        std::cout << "Class B destructor called" << std::endl;
    }
};

class C : public B{
    public:
    C(){
        std::cout << "Class C constructor called" << std::endl;
    }
    ~C(){
        std::cout << "Class C destructor called" << std::endl;
    }
};

int main(){
    C obj;
    return 0;
}