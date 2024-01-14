#include<iostream>
#include<string>

class A{
    public:
    int id = 0;
    A(){
        std::cout << "Class A contructor called" << std::endl;
    }
    ~A(){
        std::cout << "Class A destructor called" << std::endl;
    }
};

class B : public A{
    public:
    int id = 10;
    B(){
        std::cout << "Class B constructor called" << std::endl;
    }
    ~B(){
        std::cout << "Class B destructor called" << std::endl;
    }
};

int main(){
    B obj;
    std::cout << obj.id << std::endl;
    return 0;
}