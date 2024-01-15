#include<iostream>

class base{
    public:
    int num = 69;
    void show(){
        std::cout << this->num << std::endl;
    }
    virtual void display(){};
};

class Derived : public base{
    public:
    void display(){
        std::cout << "derived display" << std::endl;
    }
};

int main(){
    base B;
    Derived D;
    base *ptr;
    ptr = &B;
    ptr->display();
    ptr = &D;
    ptr->display();
    return 0;
}