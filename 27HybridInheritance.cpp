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

class B : virtual public A{
    public:
    B(){
        std::cout << "class B constructor called" << std::endl;
    }
    ~B(){
        std::cout << "Class B destructor called" << std::endl;
    }
};

class BB :virtual public A{
    public:
    BB(){
        std::cout << "class BB constructor called" << std::endl;
    }
    ~BB(){
        std::cout << "Class BB destructor called" << std::endl;
    }
};

class C : public B, public BB{
    public:
    C(){
        std::cout << "class C constructor called" << std::endl;
    }
    ~C(){
        std::cout << "Class C destructor called" << std::endl;
    }
};

int main(){
    C obj;
    return 0;
}